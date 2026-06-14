#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindZoneVisualizer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindZoneVisualizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindZoneVisualizer_DEFINED)
#include <Modloader/app/structs/WindZoneVisualizer__Fields.h>
#if defined(IL2CPP_STRUCT_WindZoneVisualizer__Fields_DEFINED)
#define IL2CPP_STRUCT_WindZoneVisualizer_DEFINED
struct WindZoneVisualizer__Class;
struct WindZoneVisualizer {
    struct WindZoneVisualizer__Class* klass;
    MonitorData* monitor;
    struct WindZoneVisualizer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindZoneVisualizer_FWDDECL)
#define IL2CPP_STRUCT_WindZoneVisualizer_FWDDECL
#include <Modloader/app/structs/WindZoneVisualizer__Class.h>
#endif
#undef IL2CPP_STRUCT_WindZoneVisualizer_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindZoneVisualizer_DEFINED) && !defined(IL2CPP_STRUCT_WindZoneVisualizer_FWDDECL)
#include <Modloader/app/structs/WindZoneVisualizer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindZoneVisualizer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
