#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MotionAbsorb__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MotionAbsorb__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionAbsorb__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MotionAbsorb__Fields_DEFINED
struct FullBodyBipedIK;
struct MotionAbsorb_Absorber__Array;
struct AnimationCurve;
struct MotionAbsorb__Fields {
    struct MonoBehaviour__Fields _;
    struct FullBodyBipedIK* ik;
    struct MotionAbsorb_Absorber__Array* absorbers;
    float weight;
    struct AnimationCurve* falloff;
    float falloffSpeed;
    float timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MotionAbsorb__Fields_FWDDECL)
#define IL2CPP_STRUCT_MotionAbsorb__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/MotionAbsorb_Absorber__Array.h>
#endif
#undef IL2CPP_STRUCT_MotionAbsorb__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionAbsorb__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MotionAbsorb__Fields_FWDDECL)
#include <Modloader/app/structs/MotionAbsorb__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MotionAbsorb__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
