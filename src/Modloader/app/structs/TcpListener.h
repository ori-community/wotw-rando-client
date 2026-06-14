#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TcpListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TcpListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_TcpListener_DEFINED)
#include <Modloader/app/structs/TcpListener__Fields.h>
#if defined(IL2CPP_STRUCT_TcpListener__Fields_DEFINED)
#define IL2CPP_STRUCT_TcpListener_DEFINED
struct TcpListener__Class;
struct TcpListener {
    struct TcpListener__Class* klass;
    MonitorData* monitor;
    struct TcpListener__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TcpListener_FWDDECL)
#define IL2CPP_STRUCT_TcpListener_FWDDECL
#include <Modloader/app/structs/TcpListener__Class.h>
#endif
#undef IL2CPP_STRUCT_TcpListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_TcpListener_DEFINED) && !defined(IL2CPP_STRUCT_TcpListener_FWDDECL)
#include <Modloader/app/structs/TcpListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TcpListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
