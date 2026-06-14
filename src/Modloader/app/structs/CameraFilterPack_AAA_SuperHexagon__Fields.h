#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_AAA_SuperHexagon__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_AAA_SuperHexagon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_AAA_SuperHexagon__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_AAA_SuperHexagon__Fields_DEFINED
struct Shader;
struct Material;
struct CameraFilterPack_AAA_SuperHexagon__Fields {
    struct MonoBehaviour__Fields _;
    struct Shader* SCShader;
    float _AlphaHexa;
    float TimeX;
    struct Material* SCMaterial;
    float HexaSize;
    float _BorderSize;
    struct Color _BorderColor;
    struct Color _HexaColor;
    float _SpotSize;
    struct Vector2 center;
    float Radius;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_AAA_SuperHexagon__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_AAA_SuperHexagon__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_AAA_SuperHexagon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_AAA_SuperHexagon__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_AAA_SuperHexagon__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_AAA_SuperHexagon__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_AAA_SuperHexagon__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
