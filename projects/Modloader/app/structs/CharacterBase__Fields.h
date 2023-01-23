#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterBase__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CharacterBase__Fields_DEFINED
struct Transform;
struct PhysicMaterial;
struct Rigidbody;
struct CapsuleCollider;
struct CharacterBase__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* gravityTarget;
    float gravityMultiplier;
    float airborneThreshold;
    float slopeStartAngle;
    float slopeEndAngle;
    float spherecastRadius;
    struct LayerMask groundLayers;
    struct PhysicMaterial* zeroFrictionMaterial;
    struct PhysicMaterial* highFrictionMaterial;
    struct Rigidbody* r;
    float originalHeight;
    struct Vector3 originalCenter;
    struct CapsuleCollider* capsule;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterBase__Fields_FWDDECL
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/PhysicMaterial.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CharacterBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterBase__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
