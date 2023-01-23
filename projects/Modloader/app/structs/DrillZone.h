#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrillZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrillZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrillZone_DEFINED)
#include <Modloader/app/structs/DrillZone__Fields.h>
#if defined(IL2CPP_STRUCT_DrillZone__Fields_DEFINED)
#define IL2CPP_STRUCT_DrillZone_DEFINED
struct DrillZone__Class;
struct DrillZone {
    struct DrillZone__Class* klass;
    MonitorData* monitor;
    struct DrillZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrillZone_FWDDECL)
#define IL2CPP_STRUCT_DrillZone_FWDDECL
#include <Modloader/app/structs/DrillZone__Class.h>
#endif
#undef IL2CPP_STRUCT_DrillZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrillZone_DEFINED) && !defined(IL2CPP_STRUCT_DrillZone_FWDDECL)
#include <Modloader/app/structs/DrillZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrillZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
