#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugJumpAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugJumpAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugJumpAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_DropSlugVariationEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_DropSlugVariationEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugJumpAttackBehaviour__Fields_DEFINED
struct DropSlugLocomotion;
struct DropSlugJumpAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_DropSlugVariationEntity___Fields _;
    float JumpSpeed;
    struct DropSlugLocomotion* m_locomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugJumpAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropSlugJumpAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/DropSlugLocomotion.h>
#endif
#undef IL2CPP_STRUCT_DropSlugJumpAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugJumpAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugJumpAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/DropSlugJumpAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugJumpAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
