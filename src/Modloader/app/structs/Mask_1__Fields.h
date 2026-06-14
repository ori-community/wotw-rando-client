#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Mask_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Mask_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mask_1__Fields_DEFINED)
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Mask_1__Fields_DEFINED
struct RectTransform;
struct Graphic;
struct Material;
struct Mask_1__Fields {
    struct UIBehaviour__Fields _;
    struct RectTransform* m_RectTransform;
    bool m_ShowMaskGraphic;
    struct Graphic* m_Graphic;
    struct Material* m_MaskMaterial;
    struct Material* m_UnmaskMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Mask_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Mask_1__Fields_FWDDECL
#include <Modloader/app/structs/Graphic.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RectTransform.h>
#endif
#undef IL2CPP_STRUCT_Mask_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mask_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Mask_1__Fields_FWDDECL)
#include <Modloader/app/structs/Mask_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Mask_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
