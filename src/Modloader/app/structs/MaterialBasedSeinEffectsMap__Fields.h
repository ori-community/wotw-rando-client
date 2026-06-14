#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialBasedSeinEffectsMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialBasedSeinEffectsMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialBasedSeinEffectsMap__Fields_DEFINED)
#include <Modloader/app/structs/MaterialBasedResourceMap__Fields.h>
#if defined(IL2CPP_STRUCT_MaterialBasedResourceMap__Fields_DEFINED)
#define IL2CPP_STRUCT_MaterialBasedSeinEffectsMap__Fields_DEFINED
struct SeinPlatformingEffects;
struct MaterialBasedSeinPlatformingEffects__Array;
struct SeinPoleEffects;
struct MaterialTypeVFXSettings;
struct WeaponTypeVFXSettings;
struct MaterialBasedSeinEffectsMap__Fields {
    struct MaterialBasedResourceMap__Fields _;
    struct SeinPlatformingEffects* DefaultPlatformingEffects;
    struct MaterialBasedSeinPlatformingEffects__Array* PlatformingEffects;
    struct SeinPoleEffects* DefaultPoleEffects;
    struct MaterialTypeVFXSettings* MaterialTypeVFXSettings;
    struct WeaponTypeVFXSettings* WeaponTypeVFXSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaterialBasedSeinEffectsMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaterialBasedSeinEffectsMap__Fields_FWDDECL
#include <Modloader/app/structs/MaterialBasedSeinPlatformingEffects__Array.h>
#include <Modloader/app/structs/MaterialTypeVFXSettings.h>
#include <Modloader/app/structs/SeinPlatformingEffects.h>
#include <Modloader/app/structs/SeinPoleEffects.h>
#include <Modloader/app/structs/WeaponTypeVFXSettings.h>
#endif
#undef IL2CPP_STRUCT_MaterialBasedSeinEffectsMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialBasedSeinEffectsMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaterialBasedSeinEffectsMap__Fields_FWDDECL)
#include <Modloader/app/structs/MaterialBasedSeinEffectsMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialBasedSeinEffectsMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
