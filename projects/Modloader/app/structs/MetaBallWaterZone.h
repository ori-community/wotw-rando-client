#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MetaBallWaterZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MetaBallWaterZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaBallWaterZone_DEFINED)
#include <Modloader/app/structs/MetaBallWaterZone__Fields.h>
#if defined(IL2CPP_STRUCT_MetaBallWaterZone__Fields_DEFINED)
#define IL2CPP_STRUCT_MetaBallWaterZone_DEFINED
struct MetaBallWaterZone__Class;
struct MetaBallWaterZone {
    struct MetaBallWaterZone__Class* klass;
    MonitorData* monitor;
    struct MetaBallWaterZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MetaBallWaterZone_FWDDECL)
#define IL2CPP_STRUCT_MetaBallWaterZone_FWDDECL
#include <Modloader/app/structs/MetaBallWaterZone__Class.h>
#endif
#undef IL2CPP_STRUCT_MetaBallWaterZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaBallWaterZone_DEFINED) && !defined(IL2CPP_STRUCT_MetaBallWaterZone_FWDDECL)
#include <Modloader/app/structs/MetaBallWaterZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MetaBallWaterZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
