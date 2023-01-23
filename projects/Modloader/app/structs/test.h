#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_test_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_test_INITIALIZING
#if !defined(IL2CPP_STRUCT_test_DEFINED)
#include <Modloader/app/structs/test__Fields.h>
#if defined(IL2CPP_STRUCT_test__Fields_DEFINED)
#define IL2CPP_STRUCT_test_DEFINED
struct test__Class;
struct test {
    struct test__Class* klass;
    MonitorData* monitor;
    struct test__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_test_FWDDECL)
#define IL2CPP_STRUCT_test_FWDDECL
#include <Modloader/app/structs/test__Class.h>
#endif
#undef IL2CPP_STRUCT_test_INITIALIZING
#if !defined(IL2CPP_STRUCT_test_DEFINED) && !defined(IL2CPP_STRUCT_test_FWDDECL)
#include <Modloader/app/structs/test.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/test.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Test_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Test_INITIALIZING
#if !defined(IL2CPP_STRUCT_Test_DEFINED)
#include <Modloader/app/structs/Test__Fields.h>
#if defined(IL2CPP_STRUCT_Test__Fields_DEFINED)
#define IL2CPP_STRUCT_Test_DEFINED
struct Test__Class;
struct Test {
    struct Test__Class* klass;
    MonitorData* monitor;
    struct Test__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Test_FWDDECL)
#define IL2CPP_STRUCT_Test_FWDDECL
#include <Modloader/app/structs/Test__Class.h>
#endif
#undef IL2CPP_STRUCT_Test_INITIALIZING
#if !defined(IL2CPP_STRUCT_Test_DEFINED) && !defined(IL2CPP_STRUCT_Test_FWDDECL)
#include <Modloader/app/structs/Test.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Test.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
