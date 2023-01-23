#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerBasketEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerBasketEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBasketEntity__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MinerBasketEntity__Fields_DEFINED
struct Rigidbody;
struct Collider;
struct MinerBasketEntity__Fields {
    struct MonoBehaviour__Fields _;
    float RotationLimit;
    float RotationSpeed;
    struct Vector3 m_groundNormal;
    struct Vector3 rotationNoiseAmp;
    struct Vector3 rotationNoiseScale;
    struct Vector3 rotationNoiseShift;
    float velocityDamp;
    float clampSpeed;
    struct Rigidbody* body;
    struct Collider* platformCollider;
    float addRotation;
    float animationInfluence;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerBasketEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerBasketEntity__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_MinerBasketEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBasketEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerBasketEntity__Fields_FWDDECL)
#include <Modloader/app/structs/MinerBasketEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerBasketEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
