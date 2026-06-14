#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthOfFieldController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthOfFieldController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfFieldController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DepthOfFieldController__Fields_DEFINED
struct SliceRenderSettings;
struct AnimationCurve;
struct Keyframe__Array;
struct Single__Array;
struct DepthOfFieldController__Fields {
    struct MonoBehaviour__Fields _;
    struct SliceRenderSettings* m_sliceRenderSettings;
    struct AnimationCurve* DepthOfFieldCurve;
    float CurveDisplacement;
    float CurveZExtend;
    float DofDepthMin;
    float DofDepthMax;
    struct Keyframe__Array* m_newKeys;
    struct Single__Array* m_originalTimes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DepthOfFieldController__Fields_FWDDECL)
#define IL2CPP_STRUCT_DepthOfFieldController__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Keyframe__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/SliceRenderSettings.h>
#endif
#undef IL2CPP_STRUCT_DepthOfFieldController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfFieldController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DepthOfFieldController__Fields_FWDDECL)
#include <Modloader/app/structs/DepthOfFieldController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthOfFieldController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
