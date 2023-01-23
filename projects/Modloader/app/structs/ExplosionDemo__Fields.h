#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExplosionDemo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExplosionDemo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExplosionDemo__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ExplosionDemo__Fields_DEFINED
struct SimpleLocomotion;
struct AnimationCurve;
struct Rigidbody;
struct FullBodyBipedIK;
struct ExplosionDemo__Fields {
    struct MonoBehaviour__Fields _;
    struct SimpleLocomotion* character;
    float forceMlp;
    float upForce;
    float weightFalloffSpeed;
    struct AnimationCurve* weightFalloff;
    struct AnimationCurve* explosionForceByDistance;
    struct AnimationCurve* scale;
    float weight;
    struct Vector3 defaultScale;
    struct Rigidbody* r;
    struct FullBodyBipedIK* ik;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExplosionDemo__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExplosionDemo__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SimpleLocomotion.h>
#endif
#undef IL2CPP_STRUCT_ExplosionDemo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExplosionDemo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExplosionDemo__Fields_FWDDECL)
#include <Modloader/app/structs/ExplosionDemo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExplosionDemo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
