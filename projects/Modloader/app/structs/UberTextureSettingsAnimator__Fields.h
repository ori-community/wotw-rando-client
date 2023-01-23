#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberTextureSettingsAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberTextureSettingsAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberTextureSettingsAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/UberTextureSettingsAnimator_TextureName__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_UberTextureSettingsAnimator_TextureName__Enum_DEFINED)
#define IL2CPP_STRUCT_UberTextureSettingsAnimator__Fields_DEFINED
struct AnimationCurve;
struct Renderer;
struct UberTextureSettingsAnimator__Fields {
    struct BaseAnimator__Fields _;
    bool UseOffset;
    bool UseScale;
    bool UseRotation;
    bool Relative;
    struct AnimationCurve* OffsetX;
    struct AnimationCurve* OffsetY;
    struct AnimationCurve* ScaleX;
    struct AnimationCurve* ScaleY;
    struct AnimationCurve* Rotation;
    struct Vector2 m_originalOffset;
    struct Vector2 m_originalScale;
    float m_originalRotation;
    struct Renderer* m_renderer;
    UberTextureSettingsAnimator_TextureName__Enum TextureTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberTextureSettingsAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberTextureSettingsAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_UberTextureSettingsAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberTextureSettingsAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberTextureSettingsAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/UberTextureSettingsAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberTextureSettingsAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
