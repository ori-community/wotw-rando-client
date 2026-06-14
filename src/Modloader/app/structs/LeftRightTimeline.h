#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeftRightTimeline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeftRightTimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeftRightTimeline_DEFINED)
#define IL2CPP_STRUCT_LeftRightTimeline_DEFINED
struct MoonTimeline;
struct LeftRightTimeline {
    struct MoonTimeline* TimelineLeft;
    struct MoonTimeline* TimelineRight;
};
#endif
#if !defined(IL2CPP_STRUCT_LeftRightTimeline_FWDDECL)
#define IL2CPP_STRUCT_LeftRightTimeline_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LeftRightTimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeftRightTimeline_DEFINED) && !defined(IL2CPP_STRUCT_LeftRightTimeline_FWDDECL)
#include <Modloader/app/structs/LeftRightTimeline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeftRightTimeline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
