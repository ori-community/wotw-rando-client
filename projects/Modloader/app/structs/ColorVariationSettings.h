#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorVariationSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorVariationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariationSettings_DEFINED)
#include <Modloader/app/structs/ColorVariationSettings__Fields.h>
#if defined(IL2CPP_STRUCT_ColorVariationSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorVariationSettings_DEFINED
struct ColorVariationSettings__Class;
struct ColorVariationSettings {
    struct ColorVariationSettings__Class* klass;
    MonitorData* monitor;
    struct ColorVariationSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorVariationSettings_FWDDECL)
#define IL2CPP_STRUCT_ColorVariationSettings_FWDDECL
#include <Modloader/app/structs/ColorVariationSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorVariationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariationSettings_DEFINED) && !defined(IL2CPP_STRUCT_ColorVariationSettings_FWDDECL)
#include <Modloader/app/structs/ColorVariationSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorVariationSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
