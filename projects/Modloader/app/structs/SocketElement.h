#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketElement_DEFINED)
#define IL2CPP_STRUCT_SocketElement_DEFINED
struct SocketElement__Class;
struct SocketElement {
    struct SocketElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SocketElement_FWDDECL)
#define IL2CPP_STRUCT_SocketElement_FWDDECL
#include <Modloader/app/structs/SocketElement__Class.h>
#endif
#undef IL2CPP_STRUCT_SocketElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketElement_DEFINED) && !defined(IL2CPP_STRUCT_SocketElement_FWDDECL)
#include <Modloader/app/structs/SocketElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
