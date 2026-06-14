#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JUnitReporter_TestCase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JUnitReporter_TestCase_INITIALIZING
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestCase_DEFINED)
#include <Modloader/app/structs/JUnitReporter_TestCase__Fields.h>
#if defined(IL2CPP_STRUCT_JUnitReporter_TestCase__Fields_DEFINED)
#define IL2CPP_STRUCT_JUnitReporter_TestCase_DEFINED
struct JUnitReporter_TestCase__Class;
struct JUnitReporter_TestCase {
    struct JUnitReporter_TestCase__Class* klass;
    MonitorData* monitor;
    struct JUnitReporter_TestCase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestCase_FWDDECL)
#define IL2CPP_STRUCT_JUnitReporter_TestCase_FWDDECL
#include <Modloader/app/structs/JUnitReporter_TestCase__Class.h>
#endif
#undef IL2CPP_STRUCT_JUnitReporter_TestCase_INITIALIZING
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestCase_DEFINED) && !defined(IL2CPP_STRUCT_JUnitReporter_TestCase_FWDDECL)
#include <Modloader/app/structs/JUnitReporter_TestCase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JUnitReporter_TestCase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
