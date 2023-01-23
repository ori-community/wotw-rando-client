#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IExplicitFixedUpdateHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IExplicitFixedUpdateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExplicitFixedUpdateHandler_DEFINED)
#define IL2CPP_STRUCT_IExplicitFixedUpdateHandler_DEFINED
struct IExplicitFixedUpdateHandler__Class;
struct IExplicitFixedUpdateHandler {
    struct IExplicitFixedUpdateHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IExplicitFixedUpdateHandler_FWDDECL)
#define IL2CPP_STRUCT_IExplicitFixedUpdateHandler_FWDDECL
#include <Modloader/app/structs/IExplicitFixedUpdateHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IExplicitFixedUpdateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExplicitFixedUpdateHandler_DEFINED) && !defined(IL2CPP_STRUCT_IExplicitFixedUpdateHandler_FWDDECL)
#include <Modloader/app/structs/IExplicitFixedUpdateHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IExplicitFixedUpdateHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
