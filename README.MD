# SysLogAppender

[![Build Status](https://travis-ci.org/dobokirisame/SysLogAppender.svg?branch=master)](https://travis-ci.org/dobokirisame/SysLogAppender)

----------
Small project, that allows you use write your logs to syslog.  
3rd-party contains  git submodule of [ CuteLogger ](https://github.com/dept2/CuteLogger) project and script to build it  
Main project contains only appender  

Usage example:  
> #include <Logger.h>  
> auto syslogAdapter = new SyslogAppender();  
> logger->registerAppender(syslogAdapter);
  

License: MIT

