#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestSet_DEFINED)
#include <Modloader/app/structs/TestSet__Fields.h>
#if defined(IL2CPP_STRUCT_TestSet__Fields_DEFINED)
#define IL2CPP_STRUCT_TestSet_DEFINED
struct TestSet__Class;
struct TestSet {
    struct TestSet__Class* klass;
    MonitorData* monitor;
    struct TestSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestSet_FWDDECL)
#define IL2CPP_STRUCT_TestSet_FWDDECL
#include <Modloader/app/structs/TestSet__Class.h>
#endif
#undef IL2CPP_STRUCT_TestSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestSet_DEFINED) && !defined(IL2CPP_STRUCT_TestSet_FWDDECL)
#include <Modloader/app/structs/TestSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
