#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureMaskEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureMaskEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureMaskEntry__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_TextureMaskEntry__Fields_DEFINED
struct Texture2D;
struct __declspec(align(8)) TextureMaskEntry__Fields {
    float m_texelWidth;
    float m_texelHeight;
    float m_texelHalfWidth;
    float m_texelHalfHeight;
    float m_rotation;
    struct Texture2D* Mask_1;
    struct Texture2D* _SourceTexture_k__BackingField;
    struct Rect _SourceTextureBounds_k__BackingField;
    float _ScaleMultiplier_k__BackingField;
    bool _IsValid_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureMaskEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextureMaskEntry__Fields_FWDDECL
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_TextureMaskEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureMaskEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextureMaskEntry__Fields_FWDDECL)
#include <Modloader/app/structs/TextureMaskEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureMaskEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
