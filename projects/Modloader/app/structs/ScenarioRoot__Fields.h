#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenarioRoot__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenarioRoot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioRoot__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenarioRoot__Fields_DEFINED
struct MoonTimeline;
struct ScenarioRoot__Fields {
    struct MonoBehaviour__Fields _;
    bool _InvalidateParentTimelineCache_k__BackingField;
    struct MoonTimeline* m_rootTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenarioRoot__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenarioRoot__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_ScenarioRoot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioRoot__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenarioRoot__Fields_FWDDECL)
#include <Modloader/app/structs/ScenarioRoot__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenarioRoot__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
