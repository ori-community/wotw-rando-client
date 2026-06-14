#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetworkTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetworkTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkTest_DEFINED)
#include <Modloader/app/structs/NetworkTest__Fields.h>
#if defined(IL2CPP_STRUCT_NetworkTest__Fields_DEFINED)
#define IL2CPP_STRUCT_NetworkTest_DEFINED
struct NetworkTest__Class;
struct NetworkTest {
    struct NetworkTest__Class* klass;
    MonitorData* monitor;
    struct NetworkTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NetworkTest_FWDDECL)
#define IL2CPP_STRUCT_NetworkTest_FWDDECL
#include <Modloader/app/structs/NetworkTest__Class.h>
#endif
#undef IL2CPP_STRUCT_NetworkTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkTest_DEFINED) && !defined(IL2CPP_STRUCT_NetworkTest_FWDDECL)
#include <Modloader/app/structs/NetworkTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetworkTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
