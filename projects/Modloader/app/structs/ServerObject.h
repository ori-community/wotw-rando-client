#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObject_DEFINED)
#include <Modloader/app/structs/ServerObject__Fields.h>
#if defined(IL2CPP_STRUCT_ServerObject__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerObject_DEFINED
struct ServerObject__Class;
struct ServerObject {
    struct ServerObject__Class* klass;
    MonitorData* monitor;
    struct ServerObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerObject_FWDDECL)
#define IL2CPP_STRUCT_ServerObject_FWDDECL
#include <Modloader/app/structs/ServerObject__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObject_DEFINED) && !defined(IL2CPP_STRUCT_ServerObject_FWDDECL)
#include <Modloader/app/structs/ServerObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
