#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMethodReturnMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMethodReturnMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMethodReturnMessage_DEFINED)
#define IL2CPP_STRUCT_IMethodReturnMessage_DEFINED
struct IMethodReturnMessage__Class;
struct IMethodReturnMessage {
    struct IMethodReturnMessage__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMethodReturnMessage_FWDDECL)
#define IL2CPP_STRUCT_IMethodReturnMessage_FWDDECL
#include <Modloader/app/structs/IMethodReturnMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_IMethodReturnMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMethodReturnMessage_DEFINED) && !defined(IL2CPP_STRUCT_IMethodReturnMessage_FWDDECL)
#include <Modloader/app/structs/IMethodReturnMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMethodReturnMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
