#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorVariationManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorVariationManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariationManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ColorVariationManager__StaticFields_DEFINED
struct List_1_ColorVariationManager_IColorVariationInfluencer_;
struct ColorVariationSettings;
struct ColorVariationManager__StaticFields {
    struct List_1_ColorVariationManager_IColorVariationInfluencer_* s_influencers;
    struct ColorVariationSettings* s_settingsToApply;
    bool _ColorVariationDebugEnabled_k__BackingField;
    bool FreezeColorVariation;
};
#endif
#if !defined(IL2CPP_STRUCT_ColorVariationManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ColorVariationManager__StaticFields_FWDDECL
#include <Modloader/app/structs/ColorVariationSettings.h>
#include <Modloader/app/structs/List_1_ColorVariationManager_IColorVariationInfluencer_.h>
#endif
#undef IL2CPP_STRUCT_ColorVariationManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariationManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ColorVariationManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/ColorVariationManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorVariationManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
