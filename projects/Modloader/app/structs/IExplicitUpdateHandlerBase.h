#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IExplicitUpdateHandlerBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IExplicitUpdateHandlerBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExplicitUpdateHandlerBase_DEFINED)
#define IL2CPP_STRUCT_IExplicitUpdateHandlerBase_DEFINED
struct IExplicitUpdateHandlerBase__Class;
struct IExplicitUpdateHandlerBase {
    struct IExplicitUpdateHandlerBase__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IExplicitUpdateHandlerBase_FWDDECL)
#define IL2CPP_STRUCT_IExplicitUpdateHandlerBase_FWDDECL
#include <Modloader/app/structs/IExplicitUpdateHandlerBase__Class.h>
#endif
#undef IL2CPP_STRUCT_IExplicitUpdateHandlerBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExplicitUpdateHandlerBase_DEFINED) && !defined(IL2CPP_STRUCT_IExplicitUpdateHandlerBase_FWDDECL)
#include <Modloader/app/structs/IExplicitUpdateHandlerBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IExplicitUpdateHandlerBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
