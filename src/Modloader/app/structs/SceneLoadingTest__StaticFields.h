#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingTest__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingTest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest__StaticFields_DEFINED)
#include <Modloader/app/structs/SceneLoadingTest_RunState__Enum.h>
#if defined(IL2CPP_STRUCT_SceneLoadingTest_RunState__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingTest__StaticFields_DEFINED
struct HashSet_1_System_String_;
struct CancellationTokenSource;
struct Task;
struct SceneLoadingTest__StaticFields {
    struct HashSet_1_System_String_* s_ignoredScenes;
    SceneLoadingTest_RunState__Enum s_runState;

    struct CancellationTokenSource* s_cancellationTokenSource;
    struct Task* s_runningTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingTest__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingTest__StaticFields_FWDDECL
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/HashSet_1_System_String_.h>
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingTest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingTest__StaticFields_FWDDECL)
#include <Modloader/app/structs/SceneLoadingTest__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingTest__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
