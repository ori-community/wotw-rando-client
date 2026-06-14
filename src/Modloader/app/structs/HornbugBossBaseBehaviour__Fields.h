#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornbugBossBaseBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornbugBossBaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornbugBossBaseBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_HornBugBossEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_HornBugBossEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_HornbugBossBaseBehaviour__Fields_DEFINED
struct DynamicDataResolver;
struct CancellableController;
struct HitReactionController;
struct HornbugBossBaseBehaviour__Fields {
    struct EntityBehaviourNode_1_HornBugBossEntity___Fields _;
    struct DynamicDataResolver* m_dataResolver;
    bool IsBlocking;
    struct CancellableController* m_cancellableController;
    struct HitReactionController* m_hitReactionController;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornbugBossBaseBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornbugBossBaseBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CancellableController.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/HitReactionController.h>
#endif
#undef IL2CPP_STRUCT_HornbugBossBaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornbugBossBaseBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornbugBossBaseBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/HornbugBossBaseBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornbugBossBaseBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
