#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Socket_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Socket_INITIALIZING
#if !defined(IL2CPP_STRUCT_Socket_DEFINED)
#include <Modloader/app/structs/Socket__Fields.h>
#if defined(IL2CPP_STRUCT_Socket__Fields_DEFINED)
#define IL2CPP_STRUCT_Socket_DEFINED
struct Socket__Class;
struct Socket {
    struct Socket__Class* klass;
    MonitorData* monitor;
    struct Socket__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Socket_FWDDECL)
#define IL2CPP_STRUCT_Socket_FWDDECL
#include <Modloader/app/structs/Socket__Class.h>
#endif
#undef IL2CPP_STRUCT_Socket_INITIALIZING
#if !defined(IL2CPP_STRUCT_Socket_DEFINED) && !defined(IL2CPP_STRUCT_Socket_FWDDECL)
#include <Modloader/app/structs/Socket.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Socket.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
