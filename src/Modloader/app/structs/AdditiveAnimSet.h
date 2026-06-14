#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AdditiveAnimSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AdditiveAnimSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdditiveAnimSet_DEFINED)
#define IL2CPP_STRUCT_AdditiveAnimSet_DEFINED
struct MoonTimeline;
struct AdditiveAnimSet {
    struct MoonTimeline* HeadAdditiveTimeline;
    struct MoonTimeline* AbdomenAdditiveTimeline;
    struct MoonTimeline* LeftLegAdditiveTimeline;
    struct MoonTimeline* RightLegAdditiveTimeline;
};
#endif
#if !defined(IL2CPP_STRUCT_AdditiveAnimSet_FWDDECL)
#define IL2CPP_STRUCT_AdditiveAnimSet_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_AdditiveAnimSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdditiveAnimSet_DEFINED) && !defined(IL2CPP_STRUCT_AdditiveAnimSet_FWDDECL)
#include <Modloader/app/structs/AdditiveAnimSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AdditiveAnimSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
