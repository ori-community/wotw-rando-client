#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JUnitReporter_TestSuites__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JUnitReporter_TestSuites__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestSuites__Fields_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_JUnitReporter_TestSuites__Fields_DEFINED
struct String;
struct List_1_JUnitReporter_TestSuite_;
struct __declspec(align(8)) JUnitReporter_TestSuites__Fields {
    struct String* m_id;
    struct String* m_name;
    struct TimeSpan m_duration;
    struct List_1_JUnitReporter_TestSuite_* m_testSuites;
    int32_t m_numberOfTestSuitesWritten;
    int32_t m_numberOfTestCasesWrittenToOutput;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestSuites__Fields_FWDDECL)
#define IL2CPP_STRUCT_JUnitReporter_TestSuites__Fields_FWDDECL
#include <Modloader/app/structs/List_1_JUnitReporter_TestSuite_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JUnitReporter_TestSuites__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestSuites__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JUnitReporter_TestSuites__Fields_FWDDECL)
#include <Modloader/app/structs/JUnitReporter_TestSuites__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JUnitReporter_TestSuites__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
