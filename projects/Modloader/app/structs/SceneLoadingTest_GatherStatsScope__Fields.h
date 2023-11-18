#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingTest_GatherStatsScope__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingTest_GatherStatsScope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_GatherStatsScope__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingTest_GatherStatsScope__Fields_DEFINED
struct SceneLoadingTest_Context;
struct SceneLoadingTest_Stats;
struct Action;
struct __declspec(align(8)) SceneLoadingTest_GatherStatsScope__Fields {
    struct SceneLoadingTest_Context* m_ctx;
    struct SceneLoadingTest_Stats* m_stats;
    struct Action* m_endFrameHandler;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_GatherStatsScope__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingTest_GatherStatsScope__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/SceneLoadingTest_Context.h>
#include <Modloader/app/structs/SceneLoadingTest_Stats.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingTest_GatherStatsScope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_GatherStatsScope__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingTest_GatherStatsScope__Fields_FWDDECL)
#include <Modloader/app/structs/SceneLoadingTest_GatherStatsScope__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingTest_GatherStatsScope__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
