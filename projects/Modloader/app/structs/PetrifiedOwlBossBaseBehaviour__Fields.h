#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_PetrifiedOwlBossEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_PetrifiedOwlBossEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED
struct DynamicDataResolver;
struct PetrifiedOwlBehaviourSettings;
struct PetrifiedOwlBossBaseBehaviour;
struct CancellableController;
struct HitReactionController;
struct PetrifiedOwlBossBaseBehaviour__Fields {
    struct EntityBehaviourNode_1_PetrifiedOwlBossEntity___Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct PetrifiedOwlBehaviourSettings* Settings;
    struct PetrifiedOwlBossBaseBehaviour* CopyDataFrom;
    struct CancellableController* m_cancellableController;
    struct HitReactionController* m_hitReactionController;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CancellableController.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/HitReactionController.h>
#include <Modloader/app/structs/PetrifiedOwlBehaviourSettings.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
