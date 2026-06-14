#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonCharacterController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonCharacterController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonCharacterController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonCharacterController__Fields_DEFINED
struct Rigidbody;
struct CharacterPlatformMovement;
struct CapsuleCollider;
struct Material;
struct Transform;
struct MoonCharacterController__Fields {
    struct MonoBehaviour__Fields _;
    float MinPenetration;
    int32_t m_safeRecursion;
    struct Rigidbody* m_rigidbody;
    struct CharacterPlatformMovement* m_controllerPenetrate;
    struct CapsuleCollider* m_capsule;
    bool m_isPrewarmed;
    struct Material* mat;
    float range;
    struct Transform* shape;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonCharacterController__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonCharacterController__Fields_FWDDECL
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MoonCharacterController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonCharacterController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonCharacterController__Fields_FWDDECL)
#include <Modloader/app/structs/MoonCharacterController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonCharacterController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
