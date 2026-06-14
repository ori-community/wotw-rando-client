#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDebugMenuPageHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDebugMenuPageHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDebugMenuPageHandler_DEFINED)
#define IL2CPP_STRUCT_IDebugMenuPageHandler_DEFINED
struct IDebugMenuPageHandler__Class;
struct IDebugMenuPageHandler {
    struct IDebugMenuPageHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDebugMenuPageHandler_FWDDECL)
#define IL2CPP_STRUCT_IDebugMenuPageHandler_FWDDECL
#include <Modloader/app/structs/IDebugMenuPageHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IDebugMenuPageHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDebugMenuPageHandler_DEFINED) && !defined(IL2CPP_STRUCT_IDebugMenuPageHandler_FWDDECL)
#include <Modloader/app/structs/IDebugMenuPageHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDebugMenuPageHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
