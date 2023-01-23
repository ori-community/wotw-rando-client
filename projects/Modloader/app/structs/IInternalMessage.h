#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IInternalMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IInternalMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInternalMessage_DEFINED)
#define IL2CPP_STRUCT_IInternalMessage_DEFINED
struct IInternalMessage__Class;
struct IInternalMessage {
    struct IInternalMessage__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IInternalMessage_FWDDECL)
#define IL2CPP_STRUCT_IInternalMessage_FWDDECL
#include <Modloader/app/structs/IInternalMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_IInternalMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInternalMessage_DEFINED) && !defined(IL2CPP_STRUCT_IInternalMessage_FWDDECL)
#include <Modloader/app/structs/IInternalMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IInternalMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
