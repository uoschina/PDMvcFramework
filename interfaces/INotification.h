﻿#ifndef INOTIFICATION_H
#define INOTIFICATION_H

#include <QString>

#include "Utils/PDGlobal.h"
#include "Utils/PDAny.h"

class PDMVC_EXPORT INotification
{
public:

    /**
    * 获取notificationName
    **/
    virtual const QString &getNotificationName() = 0;

    /**
    * 获取notifi数据体
    **/
    virtual const PDAny &getBody() = 0;
};

#endif // INOTIFICATION_H
