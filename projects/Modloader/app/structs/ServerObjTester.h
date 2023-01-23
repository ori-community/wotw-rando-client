#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerObjTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerObjTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjTester_DEFINED)
#include <Modloader/app/structs/ServerObjTester__Fields.h>
#if defined(IL2CPP_STRUCT_ServerObjTester__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerObjTester_DEFINED
struct ServerObjTester__Class;
struct ServerObjTester {
    struct ServerObjTester__Class* klass;
    MonitorData* monitor;
    struct ServerObjTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerObjTester_FWDDECL)
#define IL2CPP_STRUCT_ServerObjTester_FWDDECL
#include <Modloader/app/structs/ServerObjTester__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerObjTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjTester_DEFINED) && !defined(IL2CPP_STRUCT_ServerObjTester_FWDDECL)
#include <Modloader/app/structs/ServerObjTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerObjTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
