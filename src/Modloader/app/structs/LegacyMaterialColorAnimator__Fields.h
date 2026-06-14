#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyMaterialColorAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyMaterialColorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyMaterialColorAnimator__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_LegacyMaterialColorAnimator__Fields_DEFINED
struct String;
struct List_1_LegacyMaterialColorAnimator_RendererData_;
struct LegacyMaterialColorAnimator__Fields {
    struct LegacyAnimator__Fields _;
    bool AnimateChildren;
    struct Color Value;
    bool Red;
    bool Green;
    bool Blue;
    bool Alpha;
    struct String* Property;
    int32_t _PropertyID;
    struct List_1_LegacyMaterialColorAnimator_RendererData_* m_rendererData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyMaterialColorAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyMaterialColorAnimator__Fields_FWDDECL
#include <Modloader/app/structs/List_1_LegacyMaterialColorAnimator_RendererData_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LegacyMaterialColorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyMaterialColorAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyMaterialColorAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyMaterialColorAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyMaterialColorAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
