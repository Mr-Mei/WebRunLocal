#pragma once

///////////////////////////// 版本定义 ///////////////////////////////////
/// 定义为单机版
//#define					WRL_VRSION_STANDALONE
/// 定义为网络版
#define						WRL_VRSION_NET
/// 定义英文版
//#define					WRL_VRSION_ENG

#define	BUILD_VERSION_DAY	L"2021.03.27"

#ifdef _DEBUG
/// 定义输出日志
#define						APP_LOG_ENABLE
#endif

/// 测试加锁日志
//#define					APP_LOCK_ENABLE

#ifdef WRL_VRSION_STANDALONE

#define	APP_VERSION_MAIN	1
/// 定义次版本号
#define	APP_VERSION_MINOR	3
/// 定义小版本号
#define	APP_VERSION_SMALL	3
/// 定义编译版本号
#define	APP_VERSION_BUILD	1

#endif

#ifdef WRL_VRSION_NET

#define	APP_VERSION_MAIN	2
/// 定义次版本号
#define	APP_VERSION_MINOR	1
/// 定义小版本号
#define	APP_VERSION_SMALL	3
/// 定义编译版本号
#define	APP_VERSION_BUILD	1

#endif