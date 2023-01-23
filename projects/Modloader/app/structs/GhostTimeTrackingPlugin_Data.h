#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostTimeTrackingPlugin_Data_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostTimeTrackingPlugin_Data_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTimeTrackingPlugin_Data_DEFINED)
#include <Modloader/app/structs/GhostTimeTrackingPlugin_Data__Fields.h>
#if defined(IL2CPP_STRUCT_GhostTimeTrackingPlugin_Data__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostTimeTrackingPlugin_Data_DEFINED
struct GhostTimeTrackingPlugin_Data__Class;
struct GhostTimeTrackingPlugin_Data {
    struct GhostTimeTrackingPlugin_Data__Class* klass;
    MonitorData* monitor;
    struct GhostTimeTrackingPlugin_Data__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostTimeTrackingPlugin_Data_FWDDECL)
#define IL2CPP_STRUCT_GhostTimeTrackingPlugin_Data_FWDDECL
#include <Modloader/app/structs/GhostTimeTrackingPlugin_Data__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostTimeTrackingPlugin_Data_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTimeTrackingPlugin_Data_DEFINED) && !defined(IL2CPP_STRUCT_GhostTimeTrackingPlugin_Data_FWDDECL)
#include <Modloader/app/structs/GhostTimeTrackingPlugin_Data.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostTimeTrackingPlugin_Data.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
