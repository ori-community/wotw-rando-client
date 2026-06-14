#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMethodMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMethodMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMethodMessage_DEFINED)
#define IL2CPP_STRUCT_IMethodMessage_DEFINED
struct IMethodMessage__Class;
struct IMethodMessage {
    struct IMethodMessage__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMethodMessage_FWDDECL)
#define IL2CPP_STRUCT_IMethodMessage_FWDDECL
#include <Modloader/app/structs/IMethodMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_IMethodMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMethodMessage_DEFINED) && !defined(IL2CPP_STRUCT_IMethodMessage_FWDDECL)
#include <Modloader/app/structs/IMethodMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMethodMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
