#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestSetManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestSetManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestSetManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TestSetManager__StaticFields_DEFINED
struct String;
struct List_1_TestSet_;
struct JUnitReporter_TestSuite;
struct TestReporter;
struct TestSetManager__StaticFields {
    struct String* TestsRelativePath;
    struct String* TestsToRunFileName;
    int32_t m_testSetIndex;
    struct List_1_TestSet_* TestSets;
    struct JUnitReporter_TestSuite* m_testSuite;
    struct TestReporter* m_testReporter;
};
#endif
#if !defined(IL2CPP_STRUCT_TestSetManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TestSetManager__StaticFields_FWDDECL
#include <Modloader/app/structs/JUnitReporter_TestSuite.h>
#include <Modloader/app/structs/List_1_TestSet_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TestReporter.h>
#endif
#undef IL2CPP_STRUCT_TestSetManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestSetManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TestSetManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/TestSetManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestSetManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
