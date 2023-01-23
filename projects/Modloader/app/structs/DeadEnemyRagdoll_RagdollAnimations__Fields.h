#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeadEnemyRagdoll_RagdollAnimations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeadEnemyRagdoll_RagdollAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeadEnemyRagdoll_RagdollAnimations__Fields_DEFINED)
#define IL2CPP_STRUCT_DeadEnemyRagdoll_RagdollAnimations__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct __declspec(align(8)) DeadEnemyRagdoll_RagdollAnimations__Fields {
    struct TextureAnimationWithTransitions* DeathPlummet;
    struct TextureAnimationWithTransitions* DeathPlummetLoop;
    struct TextureAnimationWithTransitions* DeathPlummetFlatLand;
    struct TextureAnimationWithTransitions* DeathPlummetEdgeLand;
    struct TextureAnimationWithTransitions* Drown;
};
#endif
#if !defined(IL2CPP_STRUCT_DeadEnemyRagdoll_RagdollAnimations__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeadEnemyRagdoll_RagdollAnimations__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_DeadEnemyRagdoll_RagdollAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeadEnemyRagdoll_RagdollAnimations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeadEnemyRagdoll_RagdollAnimations__Fields_FWDDECL)
#include <Modloader/app/structs/DeadEnemyRagdoll_RagdollAnimations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeadEnemyRagdoll_RagdollAnimations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
