#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestSetConfiguration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestSetConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestSetConfiguration_DEFINED)
#include <Modloader/app/structs/TestSetConfiguration__Fields.h>
#if defined(IL2CPP_STRUCT_TestSetConfiguration__Fields_DEFINED)
#define IL2CPP_STRUCT_TestSetConfiguration_DEFINED
struct TestSetConfiguration__Class;
struct TestSetConfiguration {
    struct TestSetConfiguration__Class* klass;
    MonitorData* monitor;
    struct TestSetConfiguration__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestSetConfiguration_FWDDECL)
#define IL2CPP_STRUCT_TestSetConfiguration_FWDDECL
#include <Modloader/app/structs/TestSetConfiguration__Class.h>
#endif
#undef IL2CPP_STRUCT_TestSetConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestSetConfiguration_DEFINED) && !defined(IL2CPP_STRUCT_TestSetConfiguration_FWDDECL)
#include <Modloader/app/structs/TestSetConfiguration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestSetConfiguration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
