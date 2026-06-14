#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonProfilerManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonProfilerManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonProfilerManager_DEFINED)
#define IL2CPP_STRUCT_MoonProfilerManager_DEFINED
struct MoonProfilerManager__Class;
struct MoonProfilerManager {
    struct MoonProfilerManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonProfilerManager_FWDDECL)
#define IL2CPP_STRUCT_MoonProfilerManager_FWDDECL
#include <Modloader/app/structs/MoonProfilerManager__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonProfilerManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonProfilerManager_DEFINED) && !defined(IL2CPP_STRUCT_MoonProfilerManager_FWDDECL)
#include <Modloader/app/structs/MoonProfilerManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonProfilerManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
