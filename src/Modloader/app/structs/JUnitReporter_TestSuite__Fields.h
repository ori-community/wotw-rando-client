#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JUnitReporter_TestSuite__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JUnitReporter_TestSuite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestSuite__Fields_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_JUnitReporter_TestSuite__Fields_DEFINED
struct String;
struct List_1_JUnitReporter_TestCase_;
struct __declspec(align(8)) JUnitReporter_TestSuite__Fields {
    struct String* m_id;
    struct String* m_name;
    struct TimeSpan m_timeSpan;
    struct List_1_JUnitReporter_TestCase_* m_testCases;
    int32_t m_numberOfTestCasesWrittenToOutput;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestSuite__Fields_FWDDECL)
#define IL2CPP_STRUCT_JUnitReporter_TestSuite__Fields_FWDDECL
#include <Modloader/app/structs/List_1_JUnitReporter_TestCase_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JUnitReporter_TestSuite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestSuite__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JUnitReporter_TestSuite__Fields_FWDDECL)
#include <Modloader/app/structs/JUnitReporter_TestSuite__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JUnitReporter_TestSuite__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
