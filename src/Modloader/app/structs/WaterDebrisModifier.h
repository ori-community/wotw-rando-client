#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterDebrisModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterDebrisModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterDebrisModifier_DEFINED)
#include <Modloader/app/structs/WaterDebrisModifier__Fields.h>
#if defined(IL2CPP_STRUCT_WaterDebrisModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterDebrisModifier_DEFINED
struct WaterDebrisModifier__Class;
struct WaterDebrisModifier {
    struct WaterDebrisModifier__Class* klass;
    MonitorData* monitor;
    struct WaterDebrisModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterDebrisModifier_FWDDECL)
#define IL2CPP_STRUCT_WaterDebrisModifier_FWDDECL
#include <Modloader/app/structs/WaterDebrisModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterDebrisModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterDebrisModifier_DEFINED) && !defined(IL2CPP_STRUCT_WaterDebrisModifier_FWDDECL)
#include <Modloader/app/structs/WaterDebrisModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterDebrisModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
