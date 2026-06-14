#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonProfilerManager_Recorders__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonProfilerManager_Recorders__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonProfilerManager_Recorders__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonProfilerManager_Recorders__StaticFields_DEFINED
struct Recorder;
struct MoonProfilerManager_Recorders__StaticFields {
    struct Recorder* fixedUpdate;
    struct Recorder* update;
    struct Recorder* lateUpdate;
    struct Recorder* coroutines;
    struct Recorder* physicsFixedUpdate;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonProfilerManager_Recorders__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonProfilerManager_Recorders__StaticFields_FWDDECL
#include <Modloader/app/structs/Recorder.h>
#endif
#undef IL2CPP_STRUCT_MoonProfilerManager_Recorders__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonProfilerManager_Recorders__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonProfilerManager_Recorders__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonProfilerManager_Recorders__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonProfilerManager_Recorders__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
