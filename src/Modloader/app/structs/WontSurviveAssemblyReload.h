#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WontSurviveAssemblyReload_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WontSurviveAssemblyReload_INITIALIZING
#if !defined(IL2CPP_STRUCT_WontSurviveAssemblyReload_DEFINED)
#define IL2CPP_STRUCT_WontSurviveAssemblyReload_DEFINED
struct WontSurviveAssemblyReload__Class;
struct WontSurviveAssemblyReload {
    struct WontSurviveAssemblyReload__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WontSurviveAssemblyReload_FWDDECL)
#define IL2CPP_STRUCT_WontSurviveAssemblyReload_FWDDECL
#include <Modloader/app/structs/WontSurviveAssemblyReload__Class.h>
#endif
#undef IL2CPP_STRUCT_WontSurviveAssemblyReload_INITIALIZING
#if !defined(IL2CPP_STRUCT_WontSurviveAssemblyReload_DEFINED) && !defined(IL2CPP_STRUCT_WontSurviveAssemblyReload_FWDDECL)
#include <Modloader/app/structs/WontSurviveAssemblyReload.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WontSurviveAssemblyReload.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
