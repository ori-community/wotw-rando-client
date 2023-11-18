#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorVariationZoneModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorVariationZoneModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariationZoneModifier__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorVariationZoneModifier__Fields_DEFINED
struct ColorVariationSettings;
struct ColorVariationZoneModifier__Fields {
    struct MonoBehaviour__Fields _;
    struct ColorVariationSettings* Settings;
    bool m_visible;
    float _ColorVariationWeight_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorVariationZoneModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColorVariationZoneModifier__Fields_FWDDECL
#include <Modloader/app/structs/ColorVariationSettings.h>
#endif
#undef IL2CPP_STRUCT_ColorVariationZoneModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariationZoneModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColorVariationZoneModifier__Fields_FWDDECL)
#include <Modloader/app/structs/ColorVariationZoneModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorVariationZoneModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
