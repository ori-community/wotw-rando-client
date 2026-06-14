#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestRunner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestRunner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestRunner__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TestRunner__Fields_DEFINED
struct String__Array;
struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_;
struct String;
struct Stack_1_System_Collections_IEnumerator_;
struct TestRunner__Fields {
    struct MonoBehaviour__Fields _;
    struct String__Array* PerfSceneLists;
    struct Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_* sceneNameToTests;
    struct String* currentSceneName;
    struct Stack_1_System_Collections_IEnumerator_* TestCourtineStack;
    struct String* TestRunningString;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestRunner__Fields_FWDDECL)
#define IL2CPP_STRUCT_TestRunner__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_List_1_HierarchyPerfTest_PerfTestTimer_TestData_.h>
#include <Modloader/app/structs/Stack_1_System_Collections_IEnumerator_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_TestRunner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestRunner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TestRunner__Fields_FWDDECL)
#include <Modloader/app/structs/TestRunner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestRunner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
