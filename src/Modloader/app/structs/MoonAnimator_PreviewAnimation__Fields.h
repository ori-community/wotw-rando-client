#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_PreviewAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_PreviewAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_PreviewAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_PreviewAnimation__Fields_DEFINED
struct MoonAnimation;
struct __declspec(align(8)) MoonAnimator_PreviewAnimation__Fields {
    float StartTime;
    float EndTime;
    int32_t Priority;
    float Speed;
    struct MoonAnimation* Animation;
    int32_t Id;
    float Weight;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_PreviewAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_PreviewAnimation__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_PreviewAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_PreviewAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_PreviewAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_PreviewAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_PreviewAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
