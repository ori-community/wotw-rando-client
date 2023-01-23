#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrackingServices_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrackingServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackingServices_DEFINED)
#define IL2CPP_STRUCT_TrackingServices_DEFINED
struct TrackingServices__Class;
struct TrackingServices {
    struct TrackingServices__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TrackingServices_FWDDECL)
#define IL2CPP_STRUCT_TrackingServices_FWDDECL
#include <Modloader/app/structs/TrackingServices__Class.h>
#endif
#undef IL2CPP_STRUCT_TrackingServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackingServices_DEFINED) && !defined(IL2CPP_STRUCT_TrackingServices_FWDDECL)
#include <Modloader/app/structs/TrackingServices.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrackingServices.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
