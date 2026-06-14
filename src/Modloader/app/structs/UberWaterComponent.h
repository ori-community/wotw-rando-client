#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterComponent_DEFINED)
#include <Modloader/app/structs/UberWaterComponent__Fields.h>
#if defined(IL2CPP_STRUCT_UberWaterComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterComponent_DEFINED
struct UberWaterComponent__Class;
struct UberWaterComponent {
    struct UberWaterComponent__Class* klass;
    MonitorData* monitor;
    struct UberWaterComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterComponent_FWDDECL)
#define IL2CPP_STRUCT_UberWaterComponent_FWDDECL
#include <Modloader/app/structs/UberWaterComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_UberWaterComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterComponent_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterComponent_FWDDECL)
#include <Modloader/app/structs/UberWaterComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
