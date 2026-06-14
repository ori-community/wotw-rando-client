#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingTest_Context__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingTest_Context__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_Context__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingTest_Context__Fields_DEFINED
struct IProfilingDataProvider;
struct CsvWriter;
struct List_1_System_ValueTuple_2__2;
struct Stopwatch;
struct __declspec(align(8)) SceneLoadingTest_Context__Fields {
    struct IProfilingDataProvider* DataProvider;
    struct CsvWriter* Writer;
    struct List_1_System_ValueTuple_2__2* PendingScenes;
    struct Stopwatch* StatsStopwatch;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_Context__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingTest_Context__Fields_FWDDECL
#include <Modloader/app/structs/CsvWriter.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/Stopwatch.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingTest_Context__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_Context__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingTest_Context__Fields_FWDDECL)
#include <Modloader/app/structs/SceneLoadingTest_Context__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingTest_Context__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
