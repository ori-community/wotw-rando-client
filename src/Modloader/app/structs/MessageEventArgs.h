#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageEventArgs_DEFINED)
#include <Modloader/app/structs/MessageEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_MessageEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageEventArgs_DEFINED
struct MessageEventArgs__Class;
struct MessageEventArgs {
    struct MessageEventArgs__Class* klass;
    MonitorData* monitor;
    struct MessageEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageEventArgs_FWDDECL)
#define IL2CPP_STRUCT_MessageEventArgs_FWDDECL
#include <Modloader/app/structs/MessageEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_MessageEventArgs_FWDDECL)
#include <Modloader/app/structs/MessageEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
