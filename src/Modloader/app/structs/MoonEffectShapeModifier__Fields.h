#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonEffectShapeModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonEffectShapeModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectShapeModifier__Fields_DEFINED)
#include <Modloader/app/structs/MoonEffectVariationModifier__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MoonEffectVariationModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MoonEffectShapeModifier__Fields_DEFINED
struct MoonEffectShapeModifier__Fields {
    struct MoonEffectVariationModifier__Fields _;
    struct Vector3 Multiplier;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonEffectShapeModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonEffectShapeModifier__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonEffectShapeModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectShapeModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonEffectShapeModifier__Fields_FWDDECL)
#include <Modloader/app/structs/MoonEffectShapeModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonEffectShapeModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
