#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEnvoyInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEnvoyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEnvoyInfo_DEFINED)
#define IL2CPP_STRUCT_IEnvoyInfo_DEFINED
struct IEnvoyInfo__Class;
struct IEnvoyInfo {
    struct IEnvoyInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEnvoyInfo_FWDDECL)
#define IL2CPP_STRUCT_IEnvoyInfo_FWDDECL
#include <Modloader/app/structs/IEnvoyInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IEnvoyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEnvoyInfo_DEFINED) && !defined(IL2CPP_STRUCT_IEnvoyInfo_FWDDECL)
#include <Modloader/app/structs/IEnvoyInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEnvoyInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
