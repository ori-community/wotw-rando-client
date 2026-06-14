#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterDisplacementModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterDisplacementModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterDisplacementModifier_DEFINED)
#include <Modloader/app/structs/WaterDisplacementModifier__Fields.h>
#if defined(IL2CPP_STRUCT_WaterDisplacementModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterDisplacementModifier_DEFINED
struct WaterDisplacementModifier__Class;
struct WaterDisplacementModifier {
    struct WaterDisplacementModifier__Class* klass;
    MonitorData* monitor;
    struct WaterDisplacementModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterDisplacementModifier_FWDDECL)
#define IL2CPP_STRUCT_WaterDisplacementModifier_FWDDECL
#include <Modloader/app/structs/WaterDisplacementModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterDisplacementModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterDisplacementModifier_DEFINED) && !defined(IL2CPP_STRUCT_WaterDisplacementModifier_FWDDECL)
#include <Modloader/app/structs/WaterDisplacementModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterDisplacementModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
