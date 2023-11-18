#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsoleConnection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsoleConnection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleConnection_DEFINED)
#include <Modloader/app/structs/ConsoleConnection__Fields.h>
#if defined(IL2CPP_STRUCT_ConsoleConnection__Fields_DEFINED)
#define IL2CPP_STRUCT_ConsoleConnection_DEFINED
struct ConsoleConnection__Class;
struct ConsoleConnection {
    struct ConsoleConnection__Class* klass;
    MonitorData* monitor;
    struct ConsoleConnection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConsoleConnection_FWDDECL)
#define IL2CPP_STRUCT_ConsoleConnection_FWDDECL
#include <Modloader/app/structs/ConsoleConnection__Class.h>
#endif
#undef IL2CPP_STRUCT_ConsoleConnection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleConnection_DEFINED) && !defined(IL2CPP_STRUCT_ConsoleConnection_FWDDECL)
#include <Modloader/app/structs/ConsoleConnection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsoleConnection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
