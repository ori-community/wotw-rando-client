#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterFallMaskModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterFallMaskModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFallMaskModifier_DEFINED)
#include <Modloader/app/structs/WaterFallMaskModifier__Fields.h>
#if defined(IL2CPP_STRUCT_WaterFallMaskModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterFallMaskModifier_DEFINED
struct WaterFallMaskModifier__Class;
struct WaterFallMaskModifier {
    struct WaterFallMaskModifier__Class* klass;
    MonitorData* monitor;
    struct WaterFallMaskModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterFallMaskModifier_FWDDECL)
#define IL2CPP_STRUCT_WaterFallMaskModifier_FWDDECL
#include <Modloader/app/structs/WaterFallMaskModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterFallMaskModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFallMaskModifier_DEFINED) && !defined(IL2CPP_STRUCT_WaterFallMaskModifier_FWDDECL)
#include <Modloader/app/structs/WaterFallMaskModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterFallMaskModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
