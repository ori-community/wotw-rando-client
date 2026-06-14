#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServicePoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServicePoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePoint__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_ServicePoint__Fields_DEFINED
struct Uri;
struct Version;
struct IPHostEntry;
struct Dictionary_2_System_String_System_Net_WebConnectionGroup_;
struct Object;
struct BindIPEndPoint;
struct Timer;
struct __declspec(align(8)) ServicePoint__Fields {
    struct Uri* uri;
    int32_t connectionLimit;
    int32_t maxIdleTime;
    int32_t currentConnections;
    struct DateTime idleSince;
    struct DateTime lastDnsResolve;
    struct Version* protocolVersion;
    struct IPHostEntry* host;
    bool usesProxy;
    struct Dictionary_2_System_String_System_Net_WebConnectionGroup_* groups;
    bool sendContinue;
    bool useConnect;
    struct Object* hostE;
    bool useNagle;
    struct BindIPEndPoint* endPointCallback;
    bool tcp_keepalive;
    int32_t tcp_keepalive_time;
    int32_t tcp_keepalive_interval;
    struct Timer* idleTimer;
    struct Object* m_ServerCertificateOrBytes;
    struct Object* m_ClientCertificateOrBytes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServicePoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_ServicePoint__Fields_FWDDECL
#include <Modloader/app/structs/BindIPEndPoint.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Net_WebConnectionGroup_.h>
#include <Modloader/app/structs/IPHostEntry.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Timer.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/Version.h>
#endif
#undef IL2CPP_STRUCT_ServicePoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ServicePoint__Fields_FWDDECL)
#include <Modloader/app/structs/ServicePoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServicePoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
