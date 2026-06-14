#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Record__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Record__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Record__Fields_DEFINED)
#define IL2CPP_STRUCT_Record__Fields_DEFINED
struct Entity;
struct CapsuleCollider;
struct Rigidbody;
struct CharacterPlatformMovement;
struct List_1_PhysicsDebugTools_RecordEntry_;
struct __declspec(align(8)) Record__Fields {
    struct Entity* Target;
    struct CapsuleCollider* MainCollider;
    struct Rigidbody* RB;
    struct CharacterPlatformMovement* PlatformMovement;
    struct List_1_PhysicsDebugTools_RecordEntry_* Entries;
};
#endif
#if !defined(IL2CPP_STRUCT_Record__Fields_FWDDECL)
#define IL2CPP_STRUCT_Record__Fields_FWDDECL
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/List_1_PhysicsDebugTools_RecordEntry_.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_Record__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Record__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Record__Fields_FWDDECL)
#include <Modloader/app/structs/Record__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Record__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
