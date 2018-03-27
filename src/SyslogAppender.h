#ifndef SYSLOGAPPENDER_H
#define SYSLOGAPPENDER_H
#include <ConsoleAppender.h>

class SyslogAppender : public ConsoleAppender {
public:
    SyslogAppender();
protected:
    void append(const QDateTime &timeStamp, Logger::LogLevel logLevel, const char *file, int line,
                const char *function, const QString &category, const QString &message) override;
};

#endif // SYSLOGAPPENDER_H
