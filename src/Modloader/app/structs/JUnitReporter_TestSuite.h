#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JUnitReporter_TestSuite_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JUnitReporter_TestSuite_INITIALIZING
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestSuite_DEFINED)
#include <Modloader/app/structs/JUnitReporter_TestSuite__Fields.h>
#if defined(IL2CPP_STRUCT_JUnitReporter_TestSuite__Fields_DEFINED)
#define IL2CPP_STRUCT_JUnitReporter_TestSuite_DEFINED
struct JUnitReporter_TestSuite__Class;
struct JUnitReporter_TestSuite {
    struct JUnitReporter_TestSuite__Class* klass;
    MonitorData* monitor;
    struct JUnitReporter_TestSuite__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestSuite_FWDDECL)
#define IL2CPP_STRUCT_JUnitReporter_TestSuite_FWDDECL
#include <Modloader/app/structs/JUnitReporter_TestSuite__Class.h>
#endif
#undef IL2CPP_STRUCT_JUnitReporter_TestSuite_INITIALIZING
#if !defined(IL2CPP_STRUCT_JUnitReporter_TestSuite_DEFINED) && !defined(IL2CPP_STRUCT_JUnitReporter_TestSuite_FWDDECL)
#include <Modloader/app/structs/JUnitReporter_TestSuite.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JUnitReporter_TestSuite.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
