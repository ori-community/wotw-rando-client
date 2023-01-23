#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JUnitReporter_TestCase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JUnitReporter_TestCase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestCase__Fields_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_JUnitReporter_TestCase__Fields_DEFINED
struct String;
struct List_1_JUnitReporter_Failure_;
struct __declspec(align(8)) JUnitReporter_TestCase__Fields {
    struct String* m_id;
    struct String* m_name;
    struct List_1_JUnitReporter_Failure_* m_failure;
    struct TimeSpan m_timeSpan;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestCase__Fields_FWDDECL)
#define IL2CPP_STRUCT_JUnitReporter_TestCase__Fields_FWDDECL
#include <Modloader/app/structs/List_1_JUnitReporter_Failure_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JUnitReporter_TestCase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestCase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JUnitReporter_TestCase__Fields_FWDDECL)
#include <Modloader/app/structs/JUnitReporter_TestCase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JUnitReporter_TestCase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
