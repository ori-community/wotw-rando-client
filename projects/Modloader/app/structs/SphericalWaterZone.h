#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SphericalWaterZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SphericalWaterZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SphericalWaterZone_DEFINED)
#include <Modloader/app/structs/SphericalWaterZone__Fields.h>
#if defined(IL2CPP_STRUCT_SphericalWaterZone__Fields_DEFINED)
#define IL2CPP_STRUCT_SphericalWaterZone_DEFINED
struct SphericalWaterZone__Class;
struct SphericalWaterZone {
    struct SphericalWaterZone__Class* klass;
    MonitorData* monitor;
    struct SphericalWaterZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SphericalWaterZone_FWDDECL)
#define IL2CPP_STRUCT_SphericalWaterZone_FWDDECL
#include <Modloader/app/structs/SphericalWaterZone__Class.h>
#endif
#undef IL2CPP_STRUCT_SphericalWaterZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SphericalWaterZone_DEFINED) && !defined(IL2CPP_STRUCT_SphericalWaterZone_FWDDECL)
#include <Modloader/app/structs/SphericalWaterZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SphericalWaterZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
