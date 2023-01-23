#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestRunner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestRunner_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestRunner_DEFINED)
#include <Modloader/app/structs/TestRunner__Fields.h>
#if defined(IL2CPP_STRUCT_TestRunner__Fields_DEFINED)
#define IL2CPP_STRUCT_TestRunner_DEFINED
struct TestRunner__Class;
struct TestRunner {
    struct TestRunner__Class* klass;
    MonitorData* monitor;
    struct TestRunner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestRunner_FWDDECL)
#define IL2CPP_STRUCT_TestRunner_FWDDECL
#include <Modloader/app/structs/TestRunner__Class.h>
#endif
#undef IL2CPP_STRUCT_TestRunner_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestRunner_DEFINED) && !defined(IL2CPP_STRUCT_TestRunner_FWDDECL)
#include <Modloader/app/structs/TestRunner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestRunner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
