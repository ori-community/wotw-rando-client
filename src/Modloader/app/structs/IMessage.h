#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMessage_DEFINED)
#define IL2CPP_STRUCT_IMessage_DEFINED
struct IMessage__Class;
struct IMessage {
    struct IMessage__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMessage_FWDDECL)
#define IL2CPP_STRUCT_IMessage_FWDDECL
#include <Modloader/app/structs/IMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_IMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMessage_DEFINED) && !defined(IL2CPP_STRUCT_IMessage_FWDDECL)
#include <Modloader/app/structs/IMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
