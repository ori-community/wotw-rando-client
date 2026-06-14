#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskableGraphic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskableGraphic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskableGraphic__Fields_DEFINED)
#include <Modloader/app/structs/Graphic__Fields.h>
#if defined(IL2CPP_STRUCT_Graphic__Fields_DEFINED)
#define IL2CPP_STRUCT_MaskableGraphic__Fields_DEFINED
struct Material;
struct RectMask2D;
struct MaskableGraphic_CullStateChangedEvent;
struct Vector3__Array;
struct MaskableGraphic__Fields {
    struct Graphic__Fields _;
    bool m_ShouldRecalculateStencil;
    struct Material* m_MaskMaterial;
    struct RectMask2D* m_ParentMask;
    bool m_Maskable;
    bool m_IncludeForMasking;
    struct MaskableGraphic_CullStateChangedEvent* m_OnCullStateChanged;
    bool m_ShouldRecalculate;
    int32_t m_StencilValue;
    struct Vector3__Array* m_Corners;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaskableGraphic__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaskableGraphic__Fields_FWDDECL
#include <Modloader/app/structs/MaskableGraphic_CullStateChangedEvent.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RectMask2D.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_MaskableGraphic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskableGraphic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaskableGraphic__Fields_FWDDECL)
#include <Modloader/app/structs/MaskableGraphic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskableGraphic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
