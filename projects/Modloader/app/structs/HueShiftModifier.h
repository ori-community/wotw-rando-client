#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HueShiftModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HueShiftModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_HueShiftModifier_DEFINED)
#include <Modloader/app/structs/HueShiftModifier__Fields.h>
#if defined(IL2CPP_STRUCT_HueShiftModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_HueShiftModifier_DEFINED
struct HueShiftModifier__Class;
struct HueShiftModifier {
    struct HueShiftModifier__Class* klass;
    MonitorData* monitor;
    struct HueShiftModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HueShiftModifier_FWDDECL)
#define IL2CPP_STRUCT_HueShiftModifier_FWDDECL
#include <Modloader/app/structs/HueShiftModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_HueShiftModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_HueShiftModifier_DEFINED) && !defined(IL2CPP_STRUCT_HueShiftModifier_FWDDECL)
#include <Modloader/app/structs/HueShiftModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HueShiftModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
