#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonProfilerManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonProfilerManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonProfilerManager__StaticFields_DEFINED)
#include <Modloader/app/structs/MoonProfilerFrame.h>
#if defined(IL2CPP_STRUCT_MoonProfilerFrame_DEFINED)
#define IL2CPP_STRUCT_MoonProfilerManager__StaticFields_DEFINED
struct FrameTiming__Array;
struct MoonProfilerManager__StaticFields {
    struct MoonProfilerFrame lastFrame;
    struct FrameTiming__Array* frameTimings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonProfilerManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonProfilerManager__StaticFields_FWDDECL
#include <Modloader/app/structs/FrameTiming__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonProfilerManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonProfilerManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonProfilerManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonProfilerManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonProfilerManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
