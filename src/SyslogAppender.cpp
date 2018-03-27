#include "SyslogAppender.h"
#ifndef __WIN32__
#include <syslog.h>
#endif

SyslogAppender::SyslogAppender()
    : ConsoleAppender() {
}

void SyslogAppender::append(const QDateTime &timeStamp, Logger::LogLevel logLevel, const char *file, int line, const char *function, const QString &category, const QString &message) {
    Q_UNUSED(timeStamp);
    Q_UNUSED(file);
    Q_UNUSED(line);
    Q_UNUSED(function);
    QString logMessage = category + " " + message;
#ifndef __WIN32__
    syslog(static_cast<int>(logLevel), logMessage.toUtf8().data());
#endif
}
