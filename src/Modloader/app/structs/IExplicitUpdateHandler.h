#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IExplicitUpdateHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IExplicitUpdateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExplicitUpdateHandler_DEFINED)
#define IL2CPP_STRUCT_IExplicitUpdateHandler_DEFINED
struct IExplicitUpdateHandler__Class;
struct IExplicitUpdateHandler {
    struct IExplicitUpdateHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IExplicitUpdateHandler_FWDDECL)
#define IL2CPP_STRUCT_IExplicitUpdateHandler_FWDDECL
#include <Modloader/app/structs/IExplicitUpdateHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IExplicitUpdateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExplicitUpdateHandler_DEFINED) && !defined(IL2CPP_STRUCT_IExplicitUpdateHandler_FWDDECL)
#include <Modloader/app/structs/IExplicitUpdateHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IExplicitUpdateHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
