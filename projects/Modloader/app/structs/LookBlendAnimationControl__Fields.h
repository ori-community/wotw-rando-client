#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LookBlendAnimationControl__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LookBlendAnimationControl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookBlendAnimationControl__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LookBlendAnimationControl__Fields_DEFINED
struct FloatAnimationParameter;
struct MoonAnimator;
struct Sensor;
struct LookBlendAnimationControl__Fields {
    struct MonoBehaviour__Fields _;
    struct FloatAnimationParameter* LookAngleParameter;
    struct MoonAnimator* Animator;
    float LookOffsetX;
    struct Sensor* m_sensor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LookBlendAnimationControl__Fields_FWDDECL)
#define IL2CPP_STRUCT_LookBlendAnimationControl__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/Sensor.h>
#endif
#undef IL2CPP_STRUCT_LookBlendAnimationControl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookBlendAnimationControl__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LookBlendAnimationControl__Fields_FWDDECL)
#include <Modloader/app/structs/LookBlendAnimationControl__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LookBlendAnimationControl__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
