#include "listfilestrategy.h"
#include <QDir>

void ListFileStrategy::traversePath(const QString &path, QHash<QString, qint64> &hash) const
{
    QDir folder(path);
    for(auto &it : folder.entryInfoList(QDir::Dirs | QDir::Files | QDir::NoDotAndDotDot
                                        | QDir::Hidden | QDir::NoSymLinks, QDir::Type)) {
        if (it.isDir()) {
            QHash<QString, qint64> tmpHash;
            traversePath(it.absoluteFilePath(), tmpHash);

            qint64 total = 0L;
            for (const auto &it : tmpHash.values()) {
                total += it;
            }
            hash[it.absoluteFilePath()] = total;
        } else {
            hash[it.absoluteFilePath()] = QFileInfo(it.absoluteFilePath()).size();
        }
    }
}
