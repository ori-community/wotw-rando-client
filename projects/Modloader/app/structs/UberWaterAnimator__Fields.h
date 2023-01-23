#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterAnimator__Fields_DEFINED
struct UberWaterControl;
struct AnimationCurve;
struct UberWaterAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct UberWaterControl* UberWater;
    struct AnimationCurve* NoiseStrength;
    struct AnimationCurve* NoiseSpeed;
    struct AnimationCurve* DirectionX;
    struct AnimationCurve* DirectionY;
    float m_originalStrength;
    float m_originalSpeed;
    float m_originalDirX;
    float m_originalDirY;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/UberWaterControl.h>
#endif
#undef IL2CPP_STRUCT_UberWaterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
