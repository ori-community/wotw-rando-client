#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RawImage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RawImage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RawImage__Fields_DEFINED)
#include <Modloader/app/structs/MaskableGraphic__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MaskableGraphic__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_RawImage__Fields_DEFINED
struct Texture;
struct RawImage__Fields {
    struct MaskableGraphic__Fields _;
    struct Texture* m_Texture;
    struct Rect m_UVRect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RawImage__Fields_FWDDECL)
#define IL2CPP_STRUCT_RawImage__Fields_FWDDECL
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_RawImage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RawImage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RawImage__Fields_FWDDECL)
#include <Modloader/app/structs/RawImage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RawImage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
