#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Image__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Image__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Image__Fields_DEFINED)
#include <Modloader/app/structs/Image_FillMethod__Enum.h>
#include <Modloader/app/structs/Image_Type__Enum.h>
#include <Modloader/app/structs/MaskableGraphic__Fields.h>
#if defined(IL2CPP_STRUCT_MaskableGraphic__Fields_DEFINED) && defined(IL2CPP_STRUCT_Image_Type__Enum_DEFINED) && defined(IL2CPP_STRUCT_Image_FillMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_Image__Fields_DEFINED
struct Sprite;
struct Image__Fields {
    struct MaskableGraphic__Fields _;
    struct Sprite* m_Sprite;
    struct Sprite* m_OverrideSprite;
    Image_Type__Enum m_Type;

    bool m_PreserveAspect;
    bool m_FillCenter;
    Image_FillMethod__Enum m_FillMethod;

    float m_FillAmount;
    bool m_FillClockwise;
    int32_t m_FillOrigin;
    float m_AlphaHitTestMinimumThreshold;
    bool m_Tracked;
    bool m_UseSpriteMesh;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Image__Fields_FWDDECL)
#define IL2CPP_STRUCT_Image__Fields_FWDDECL
#include <Modloader/app/structs/Sprite.h>
#endif
#undef IL2CPP_STRUCT_Image__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Image__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Image__Fields_FWDDECL)
#include <Modloader/app/structs/Image__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Image__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
