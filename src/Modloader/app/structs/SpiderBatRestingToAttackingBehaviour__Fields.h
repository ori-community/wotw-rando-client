#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBatRestingToAttackingBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBatRestingToAttackingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatRestingToAttackingBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SpiderBatEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SpiderBatEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBatRestingToAttackingBehaviour__Fields_DEFINED
struct MoonTimeline;
struct SpiderBatEntity;
struct SpiderBatRestingToAttackingBehaviour__Fields {
    struct EntityBehaviourNode_1_SpiderBatEntity___Fields _;
    struct MoonTimeline* TimelineSequence;
    float ClimbDownSpeed;
    bool m_hasFinished;
    bool m_isActivated;
    struct SpiderBatEntity* m_spiderBatEntity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBatRestingToAttackingBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBatRestingToAttackingBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpiderBatEntity.h>
#endif
#undef IL2CPP_STRUCT_SpiderBatRestingToAttackingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatRestingToAttackingBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBatRestingToAttackingBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBatRestingToAttackingBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBatRestingToAttackingBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
