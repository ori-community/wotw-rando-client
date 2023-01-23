#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestWindowB_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestWindowB_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestWindowB_DEFINED)
#include <Modloader/app/structs/TestWindowB__Fields.h>
#if defined(IL2CPP_STRUCT_TestWindowB__Fields_DEFINED)
#define IL2CPP_STRUCT_TestWindowB_DEFINED
struct TestWindowB__Class;
struct TestWindowB {
    struct TestWindowB__Class* klass;
    MonitorData* monitor;
    struct TestWindowB__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestWindowB_FWDDECL)
#define IL2CPP_STRUCT_TestWindowB_FWDDECL
#include <Modloader/app/structs/TestWindowB__Class.h>
#endif
#undef IL2CPP_STRUCT_TestWindowB_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestWindowB_DEFINED) && !defined(IL2CPP_STRUCT_TestWindowB_FWDDECL)
#include <Modloader/app/structs/TestWindowB.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestWindowB.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
