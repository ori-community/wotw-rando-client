#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterfaceTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterfaceTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterfaceTest_DEFINED)
#include <Modloader/app/structs/InterfaceTest__Fields.h>
#if defined(IL2CPP_STRUCT_InterfaceTest__Fields_DEFINED)
#define IL2CPP_STRUCT_InterfaceTest_DEFINED
struct InterfaceTest__Class;
struct InterfaceTest {
    struct InterfaceTest__Class* klass;
    MonitorData* monitor;
    struct InterfaceTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InterfaceTest_FWDDECL)
#define IL2CPP_STRUCT_InterfaceTest_FWDDECL
#include <Modloader/app/structs/InterfaceTest__Class.h>
#endif
#undef IL2CPP_STRUCT_InterfaceTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterfaceTest_DEFINED) && !defined(IL2CPP_STRUCT_InterfaceTest_FWDDECL)
#include <Modloader/app/structs/InterfaceTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterfaceTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
