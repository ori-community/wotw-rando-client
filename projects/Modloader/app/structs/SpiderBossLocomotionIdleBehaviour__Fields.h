#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossLocomotionIdleBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossLocomotionIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotionIdleBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBossLocomotionIdleBehaviour__Fields_DEFINED
struct SpiderBossLocationTimelineSet;
struct MoonTimeline;
struct SpiderBossEntity;
struct IKTargetBehaviour;
struct SpiderBossLocomotionIdleBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    struct SpiderBossLocationTimelineSet* Idles;
    struct MoonTimeline* m_currentTimeline;
    struct SpiderBossEntity* m_spiderBossEntity;
    struct IKTargetBehaviour* m_headIK;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotionIdleBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossLocomotionIdleBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/IKTargetBehaviour.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpiderBossEntity.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineSet.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossLocomotionIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotionIdleBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossLocomotionIdleBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossLocomotionIdleBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossLocomotionIdleBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
