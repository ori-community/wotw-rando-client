#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IExplicitLateUpdateHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IExplicitLateUpdateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExplicitLateUpdateHandler_DEFINED)
#define IL2CPP_STRUCT_IExplicitLateUpdateHandler_DEFINED
struct IExplicitLateUpdateHandler__Class;
struct IExplicitLateUpdateHandler {
    struct IExplicitLateUpdateHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IExplicitLateUpdateHandler_FWDDECL)
#define IL2CPP_STRUCT_IExplicitLateUpdateHandler_FWDDECL
#include <Modloader/app/structs/IExplicitLateUpdateHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IExplicitLateUpdateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExplicitLateUpdateHandler_DEFINED) && !defined(IL2CPP_STRUCT_IExplicitLateUpdateHandler_FWDDECL)
#include <Modloader/app/structs/IExplicitLateUpdateHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IExplicitLateUpdateHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
