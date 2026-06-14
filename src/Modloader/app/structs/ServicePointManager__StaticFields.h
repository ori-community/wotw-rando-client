#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServicePointManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServicePointManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePointManager__StaticFields_DEFINED)
#include <Modloader/app/structs/SecurityProtocolType__Enum.h>
#if defined(IL2CPP_STRUCT_SecurityProtocolType__Enum_DEFINED)
#define IL2CPP_STRUCT_ServicePointManager__StaticFields_DEFINED
struct HybridDictionary;
struct ICertificatePolicy;
struct ServerCertValidationCallback;
struct ServicePointManager__StaticFields {
    struct HybridDictionary* servicePoints;
    struct ICertificatePolicy* policy;
    int32_t defaultConnectionLimit;
    int32_t maxServicePointIdleTime;
    int32_t maxServicePoints;
    int32_t dnsRefreshTimeout;
    bool _checkCRL;
    SecurityProtocolType__Enum _securityProtocol;

    bool expectContinue;
    bool useNagle;
    struct ServerCertValidationCallback* server_cert_cb;
    bool tcp_keepalive;
    int32_t tcp_keepalive_time;
    int32_t tcp_keepalive_interval;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServicePointManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ServicePointManager__StaticFields_FWDDECL
#include <Modloader/app/structs/HybridDictionary.h>
#include <Modloader/app/structs/ICertificatePolicy.h>
#include <Modloader/app/structs/ServerCertValidationCallback.h>
#endif
#undef IL2CPP_STRUCT_ServicePointManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePointManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ServicePointManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/ServicePointManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServicePointManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
