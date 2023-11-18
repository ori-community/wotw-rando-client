#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IWaitContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IWaitContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWaitContext_DEFINED)
#define IL2CPP_STRUCT_IWaitContext_DEFINED
struct IWaitContext__Class;
struct IWaitContext {
    struct IWaitContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IWaitContext_FWDDECL)
#define IL2CPP_STRUCT_IWaitContext_FWDDECL
#include <Modloader/app/structs/IWaitContext__Class.h>
#endif
#undef IL2CPP_STRUCT_IWaitContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWaitContext_DEFINED) && !defined(IL2CPP_STRUCT_IWaitContext_FWDDECL)
#include <Modloader/app/structs/IWaitContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IWaitContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
