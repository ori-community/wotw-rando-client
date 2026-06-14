#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartBody__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartBody__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CartBody__Fields_DEFINED
struct Transform;
struct AnimationCurve;
struct CartPlatformMovement;
struct Cart;
struct CartBody__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Body;
    struct Transform* Bumper;
    float BumperRotationLimit;
    float RotationScale;
    float MaxSampleSpeed;
    struct AnimationCurve* RotationNoiseCurve;
    struct Transform* m_transform;
    struct CartPlatformMovement* m_cartMov;
    struct Cart* m_cart;
    struct Vector3 m_bodyRotation;
    struct Vector3 m_bumperRotation;
    float m_desiredRotation;
    float m_rotationTimer;
    float m_additiveRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartBody__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartBody__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/CartPlatformMovement.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CartBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartBody__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartBody__Fields_FWDDECL)
#include <Modloader/app/structs/CartBody__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartBody__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
