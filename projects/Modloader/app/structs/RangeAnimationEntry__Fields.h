#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RangeAnimationEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RangeAnimationEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeAnimationEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_RangeAnimationEntry__Fields_DEFINED
struct RootMotionProcessorData;
struct __declspec(align(8)) RangeAnimationEntry__Fields {
    int32_t Priority;
    float BaseMinSpeed;
    float BaseMaxSpeed;
    float ActivationRangeMin;
    float ActivationRangeMax;
    float AnimationSpeed;
    struct RootMotionProcessorData* RootMotion;
};
#endif
#if !defined(IL2CPP_STRUCT_RangeAnimationEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_RangeAnimationEntry__Fields_FWDDECL
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_RangeAnimationEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeAnimationEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RangeAnimationEntry__Fields_FWDDECL)
#include <Modloader/app/structs/RangeAnimationEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RangeAnimationEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
