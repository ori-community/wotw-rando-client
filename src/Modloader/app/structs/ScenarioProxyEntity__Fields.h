#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenarioProxyEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenarioProxyEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioProxyEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenarioProxyEntity__Fields_DEFINED
struct Object_1;
struct ScenarioRoot;
struct String;
struct List_1_Moon_MoonReference_1__2;
struct MoonReference_1_Moon_Timeline_ITimelineEntity_;
struct ITrimController;
struct ScenarioProxyEntity__Fields {
    struct TimelineEntity__Fields _;
    struct Object_1* ScenarioFile;
    bool LoadLinkedScenes;
    struct ScenarioRoot* ScenarioRoot;
    float m_durationCache;
    struct String* m_filePath;
    struct List_1_Moon_MoonReference_1__2* _Timelines_k__BackingField;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_* _ActiveTimeline_k__BackingField;
    struct ITrimController* _TrimController_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenarioProxyEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenarioProxyEntity__Fields_FWDDECL
#include <Modloader/app/structs/ITrimController.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__2.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/ScenarioRoot.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ScenarioProxyEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioProxyEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenarioProxyEntity__Fields_FWDDECL)
#include <Modloader/app/structs/ScenarioProxyEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenarioProxyEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
