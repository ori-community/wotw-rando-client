#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClipAnimation_RootMotionData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClipAnimation_RootMotionData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClipAnimation_RootMotionData__Fields_DEFINED)
#define IL2CPP_STRUCT_ClipAnimation_RootMotionData__Fields_DEFINED
struct AnimationCurve;
struct __declspec(align(8)) ClipAnimation_RootMotionData__Fields {
    struct AnimationCurve* XCurve;
    struct AnimationCurve* YCurve;
    struct AnimationCurve* ZCurve;
    struct AnimationCurve* WCurve;
    bool _IsDirty_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_ClipAnimation_RootMotionData__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClipAnimation_RootMotionData__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_ClipAnimation_RootMotionData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClipAnimation_RootMotionData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClipAnimation_RootMotionData__Fields_FWDDECL)
#include <Modloader/app/structs/ClipAnimation_RootMotionData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClipAnimation_RootMotionData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
