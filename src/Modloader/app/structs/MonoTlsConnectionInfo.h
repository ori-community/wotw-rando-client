#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoTlsConnectionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoTlsConnectionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsConnectionInfo_DEFINED)
#include <Modloader/app/structs/MonoTlsConnectionInfo__Fields.h>
#if defined(IL2CPP_STRUCT_MonoTlsConnectionInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoTlsConnectionInfo_DEFINED
struct MonoTlsConnectionInfo__Class;
struct MonoTlsConnectionInfo {
    struct MonoTlsConnectionInfo__Class* klass;
    MonitorData* monitor;
    struct MonoTlsConnectionInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoTlsConnectionInfo_FWDDECL)
#define IL2CPP_STRUCT_MonoTlsConnectionInfo_FWDDECL
#include <Modloader/app/structs/MonoTlsConnectionInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoTlsConnectionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsConnectionInfo_DEFINED) && !defined(IL2CPP_STRUCT_MonoTlsConnectionInfo_FWDDECL)
#include <Modloader/app/structs/MonoTlsConnectionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoTlsConnectionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
