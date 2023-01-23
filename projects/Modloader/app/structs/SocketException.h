#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketException_DEFINED)
#include <Modloader/app/structs/SocketException__Fields.h>
#if defined(IL2CPP_STRUCT_SocketException__Fields_DEFINED)
#define IL2CPP_STRUCT_SocketException_DEFINED
struct SocketException__Class;
struct SocketException {
    struct SocketException__Class* klass;
    MonitorData* monitor;
    struct SocketException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SocketException_FWDDECL)
#define IL2CPP_STRUCT_SocketException_FWDDECL
#include <Modloader/app/structs/SocketException__Class.h>
#endif
#undef IL2CPP_STRUCT_SocketException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketException_DEFINED) && !defined(IL2CPP_STRUCT_SocketException_FWDDECL)
#include <Modloader/app/structs/SocketException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
