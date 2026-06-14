#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestReporter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestReporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestReporter_DEFINED)
#include <Modloader/app/structs/TestReporter__Fields.h>
#if defined(IL2CPP_STRUCT_TestReporter__Fields_DEFINED)
#define IL2CPP_STRUCT_TestReporter_DEFINED
struct TestReporter__Class;
struct TestReporter {
    struct TestReporter__Class* klass;
    MonitorData* monitor;
    struct TestReporter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestReporter_FWDDECL)
#define IL2CPP_STRUCT_TestReporter_FWDDECL
#include <Modloader/app/structs/TestReporter__Class.h>
#endif
#undef IL2CPP_STRUCT_TestReporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestReporter_DEFINED) && !defined(IL2CPP_STRUCT_TestReporter_FWDDECL)
#include <Modloader/app/structs/TestReporter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestReporter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
