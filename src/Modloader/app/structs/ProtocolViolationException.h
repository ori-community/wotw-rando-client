#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProtocolViolationException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProtocolViolationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProtocolViolationException_DEFINED)
#include <Modloader/app/structs/ProtocolViolationException__Fields.h>
#if defined(IL2CPP_STRUCT_ProtocolViolationException__Fields_DEFINED)
#define IL2CPP_STRUCT_ProtocolViolationException_DEFINED
struct ProtocolViolationException__Class;
struct ProtocolViolationException {
    struct ProtocolViolationException__Class* klass;
    MonitorData* monitor;
    struct ProtocolViolationException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProtocolViolationException_FWDDECL)
#define IL2CPP_STRUCT_ProtocolViolationException_FWDDECL
#include <Modloader/app/structs/ProtocolViolationException__Class.h>
#endif
#undef IL2CPP_STRUCT_ProtocolViolationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProtocolViolationException_DEFINED) && !defined(IL2CPP_STRUCT_ProtocolViolationException_FWDDECL)
#include <Modloader/app/structs/ProtocolViolationException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProtocolViolationException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
