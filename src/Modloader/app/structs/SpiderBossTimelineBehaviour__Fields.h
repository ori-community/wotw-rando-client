#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossTimelineBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossTimelineBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/SpiderBossTimelineBehaviourBase__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderBossTimelineBehaviourBase__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBossTimelineBehaviour__Fields_DEFINED
struct MirroredTimelineSet;
struct SpiderBossTimelineBehaviour__Fields {
    struct SpiderBossTimelineBehaviourBase__Fields _;
    struct MirroredTimelineSet* Timelines;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossTimelineBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossTimelineBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MirroredTimelineSet.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossTimelineBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossTimelineBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossTimelineBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossTimelineBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
