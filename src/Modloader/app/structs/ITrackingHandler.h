#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITrackingHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITrackingHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrackingHandler_DEFINED)
#define IL2CPP_STRUCT_ITrackingHandler_DEFINED
struct ITrackingHandler__Class;
struct ITrackingHandler {
    struct ITrackingHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITrackingHandler_FWDDECL)
#define IL2CPP_STRUCT_ITrackingHandler_FWDDECL
#include <Modloader/app/structs/ITrackingHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ITrackingHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrackingHandler_DEFINED) && !defined(IL2CPP_STRUCT_ITrackingHandler_FWDDECL)
#include <Modloader/app/structs/ITrackingHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITrackingHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
