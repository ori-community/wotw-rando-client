#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HandshakeMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HandshakeMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandshakeMessage_DEFINED)
#include <Modloader/app/structs/HandshakeMessage__Fields.h>
#if defined(IL2CPP_STRUCT_HandshakeMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_HandshakeMessage_DEFINED
struct HandshakeMessage__Class;
struct HandshakeMessage {
    struct HandshakeMessage__Class* klass;
    MonitorData* monitor;
    struct HandshakeMessage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HandshakeMessage_FWDDECL)
#define IL2CPP_STRUCT_HandshakeMessage_FWDDECL
#include <Modloader/app/structs/HandshakeMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_HandshakeMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandshakeMessage_DEFINED) && !defined(IL2CPP_STRUCT_HandshakeMessage_FWDDECL)
#include <Modloader/app/structs/HandshakeMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HandshakeMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
