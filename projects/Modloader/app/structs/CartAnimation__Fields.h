#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartAnimation__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CartAnimation__Fields_DEFINED
struct Transform;
struct GenericSpring1D;
struct GenericSpring1D_Particle;
struct Cart;
struct CartAnimation__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Body;
    struct Transform* Bumper;
    struct Transform* Root;
    struct Transform* Whell;
    float BumperRotationLimit;
    float BodyNoiseFrequencyMin;
    float BodyNoiseFrequencyMax;
    float BodyNoiseMaxForce;
    struct GenericSpring1D* ScaleSpring;
    struct GenericSpring1D* BodySpring;
    struct GenericSpring1D* BumperSpring;
    struct GenericSpring1D_Particle* m_scaleSettings;
    struct GenericSpring1D_Particle* m_bodySettings;
    struct GenericSpring1D_Particle* m_bumperSettings;
    struct Cart* m_cart;
    struct Vector3 m_bodyRotation;
    struct Vector3 m_bodyScale;
    struct Vector3 m_bumperRotation;
    float m_desiredBodyRotation;
    float m_originalYLocalPosition;
    float m_timer;
    float m_additiveRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartAnimation__Fields_FWDDECL
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/GenericSpring1D.h>
#include <Modloader/app/structs/GenericSpring1D_Particle.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CartAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/CartAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
