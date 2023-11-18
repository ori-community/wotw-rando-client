#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterCurrentZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterCurrentZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterCurrentZone_DEFINED)
#include <Modloader/app/structs/WaterCurrentZone__Fields.h>
#if defined(IL2CPP_STRUCT_WaterCurrentZone__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterCurrentZone_DEFINED
struct WaterCurrentZone__Class;
struct WaterCurrentZone {
    struct WaterCurrentZone__Class* klass;
    MonitorData* monitor;
    struct WaterCurrentZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterCurrentZone_FWDDECL)
#define IL2CPP_STRUCT_WaterCurrentZone_FWDDECL
#include <Modloader/app/structs/WaterCurrentZone__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterCurrentZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterCurrentZone_DEFINED) && !defined(IL2CPP_STRUCT_WaterCurrentZone_FWDDECL)
#include <Modloader/app/structs/WaterCurrentZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterCurrentZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
