#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvoyInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvoyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvoyInfo_DEFINED)
#include <Modloader/app/structs/EnvoyInfo__Fields.h>
#if defined(IL2CPP_STRUCT_EnvoyInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_EnvoyInfo_DEFINED
struct EnvoyInfo__Class;
struct EnvoyInfo {
    struct EnvoyInfo__Class* klass;
    MonitorData* monitor;
    struct EnvoyInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvoyInfo_FWDDECL)
#define IL2CPP_STRUCT_EnvoyInfo_FWDDECL
#include <Modloader/app/structs/EnvoyInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_EnvoyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvoyInfo_DEFINED) && !defined(IL2CPP_STRUCT_EnvoyInfo_FWDDECL)
#include <Modloader/app/structs/EnvoyInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvoyInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
