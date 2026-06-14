#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFProxySettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFProxySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFProxySettings_DEFINED)
#include <Modloader/app/structs/CFProxySettings__Fields.h>
#if defined(IL2CPP_STRUCT_CFProxySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_CFProxySettings_DEFINED
struct CFProxySettings__Class;
struct CFProxySettings {
    struct CFProxySettings__Class* klass;
    MonitorData* monitor;
    struct CFProxySettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFProxySettings_FWDDECL)
#define IL2CPP_STRUCT_CFProxySettings_FWDDECL
#include <Modloader/app/structs/CFProxySettings__Class.h>
#endif
#undef IL2CPP_STRUCT_CFProxySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFProxySettings_DEFINED) && !defined(IL2CPP_STRUCT_CFProxySettings_FWDDECL)
#include <Modloader/app/structs/CFProxySettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFProxySettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
