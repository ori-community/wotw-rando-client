#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterCapsuleController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterCapsuleController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterCapsuleController__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CharacterCapsuleController__Fields_DEFINED
struct PlatformBehaviour;
struct CapsuleCollider;
struct CharacterCapsuleController__Fields {
    struct SaveSerialize__Fields _;
    struct PlatformBehaviour* PlatformBehaviour;
    struct CapsuleCollider* CapsuleCollider;
    struct CapsuleCollider* CrushCollider;
    struct Vector3 m_originalCenter;
    float m_originalHeight;
    float m_originalRadius;
    float m_disabledColliderDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterCapsuleController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterCapsuleController__Fields_FWDDECL
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#endif
#undef IL2CPP_STRUCT_CharacterCapsuleController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterCapsuleController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterCapsuleController__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterCapsuleController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterCapsuleController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
