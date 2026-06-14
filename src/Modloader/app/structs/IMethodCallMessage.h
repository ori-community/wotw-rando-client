#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMethodCallMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMethodCallMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMethodCallMessage_DEFINED)
#define IL2CPP_STRUCT_IMethodCallMessage_DEFINED
struct IMethodCallMessage__Class;
struct IMethodCallMessage {
    struct IMethodCallMessage__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMethodCallMessage_FWDDECL)
#define IL2CPP_STRUCT_IMethodCallMessage_FWDDECL
#include <Modloader/app/structs/IMethodCallMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_IMethodCallMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMethodCallMessage_DEFINED) && !defined(IL2CPP_STRUCT_IMethodCallMessage_FWDDECL)
#include <Modloader/app/structs/IMethodCallMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMethodCallMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
