#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionsTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionsTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionsTest_DEFINED)
#include <Modloader/app/structs/ExceptionsTest__Fields.h>
#if defined(IL2CPP_STRUCT_ExceptionsTest__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionsTest_DEFINED
struct ExceptionsTest__Class;
struct ExceptionsTest {
    struct ExceptionsTest__Class* klass;
    MonitorData* monitor;
    struct ExceptionsTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionsTest_FWDDECL)
#define IL2CPP_STRUCT_ExceptionsTest_FWDDECL
#include <Modloader/app/structs/ExceptionsTest__Class.h>
#endif
#undef IL2CPP_STRUCT_ExceptionsTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionsTest_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionsTest_FWDDECL)
#include <Modloader/app/structs/ExceptionsTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionsTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
