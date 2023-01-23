#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Internal_DrawTextureArguments_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Internal_DrawTextureArguments_INITIALIZING
#if !defined(IL2CPP_STRUCT_Internal_DrawTextureArguments_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_Internal_DrawTextureArguments_DEFINED
struct Texture;
struct Material;
struct Internal_DrawTextureArguments {
    struct Rect screenRect;
    struct Rect sourceRect;
    int32_t leftBorder;
    int32_t rightBorder;
    int32_t topBorder;
    int32_t bottomBorder;
    struct Color color;
    struct Vector4 borderWidths;
    struct Vector4 cornerRadiuses;
    int32_t pass;
    struct Texture* texture;
    struct Material* mat;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Internal_DrawTextureArguments_FWDDECL)
#define IL2CPP_STRUCT_Internal_DrawTextureArguments_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_Internal_DrawTextureArguments_INITIALIZING
#if !defined(IL2CPP_STRUCT_Internal_DrawTextureArguments_DEFINED) && !defined(IL2CPP_STRUCT_Internal_DrawTextureArguments_FWDDECL)
#include <Modloader/app/structs/Internal_DrawTextureArguments.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Internal_DrawTextureArguments.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
