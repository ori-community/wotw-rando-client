#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingTest_Stats_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingTest_Stats_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_Stats_DEFINED)
#include <Modloader/app/structs/SceneLoadingTest_Stats__Fields.h>
#if defined(IL2CPP_STRUCT_SceneLoadingTest_Stats__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingTest_Stats_DEFINED
struct SceneLoadingTest_Stats__Class;
struct SceneLoadingTest_Stats {
    struct SceneLoadingTest_Stats__Class* klass;
    MonitorData* monitor;
    struct SceneLoadingTest_Stats__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_Stats_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingTest_Stats_FWDDECL
#include <Modloader/app/structs/SceneLoadingTest_Stats__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingTest_Stats_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_Stats_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingTest_Stats_FWDDECL)
#include <Modloader/app/structs/SceneLoadingTest_Stats.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingTest_Stats.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
