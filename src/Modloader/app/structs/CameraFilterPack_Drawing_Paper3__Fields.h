#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_Drawing_Paper3__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_Drawing_Paper3__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Drawing_Paper3__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_Drawing_Paper3__Fields_DEFINED
struct Shader;
struct Material;
struct Texture2D;
struct CameraFilterPack_Drawing_Paper3__Fields {
    struct MonoBehaviour__Fields _;
    struct Shader* SCShader;
    float TimeX;
    struct Color Pencil_Color;
    float Pencil_Size;
    float Pencil_Correction;
    float Intensity;
    float Speed_Animation;
    float Corner_Lose;
    float Fade_Paper_to_BackColor;
    float Fade_With_Original;
    struct Color Back_Color;
    struct Material* SCMaterial;
    struct Texture2D* Texture2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Drawing_Paper3__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_Drawing_Paper3__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_Drawing_Paper3__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Drawing_Paper3__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_Drawing_Paper3__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_Drawing_Paper3__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_Drawing_Paper3__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
