#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyMaterialFloatAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyMaterialFloatAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyMaterialFloatAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyMaterialFloatAnimator__Fields_DEFINED
struct String;
struct List_1_LegacyMaterialFloatAnimator_RendererData_;
struct LegacyMaterialFloatAnimator__Fields {
    struct LegacyAnimator__Fields _;
    bool AnimateChildren;
    float Value;
    struct String* Property;
    int32_t _PropertyID;
    struct List_1_LegacyMaterialFloatAnimator_RendererData_* m_rendererData;
    bool m_madeMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyMaterialFloatAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyMaterialFloatAnimator__Fields_FWDDECL
#include <Modloader/app/structs/List_1_LegacyMaterialFloatAnimator_RendererData_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LegacyMaterialFloatAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyMaterialFloatAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyMaterialFloatAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyMaterialFloatAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyMaterialFloatAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
