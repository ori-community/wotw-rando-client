#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureTilingAdjuster__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureTilingAdjuster__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureTilingAdjuster__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_TextureTilingAdjuster__Fields_DEFINED
struct List_1_TextureTilingAdjuster_AdjustedTexture_;
struct Renderer;
struct TextureTilingAdjuster__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 ScaleMultiplier;
    struct List_1_TextureTilingAdjuster_AdjustedTexture_* m_adjustedTextures;
    struct Vector2 m_prevScale;
    struct Renderer* m_renderer;
    int32_t m_frame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureTilingAdjuster__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextureTilingAdjuster__Fields_FWDDECL
#include <Modloader/app/structs/List_1_TextureTilingAdjuster_AdjustedTexture_.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_TextureTilingAdjuster__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureTilingAdjuster__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextureTilingAdjuster__Fields_FWDDECL)
#include <Modloader/app/structs/TextureTilingAdjuster__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureTilingAdjuster__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
