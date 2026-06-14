#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvironmentLightTexture__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvironmentLightTexture__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentLightTexture__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_EnvironmentLightTexture__Fields_DEFINED
struct Texture2D;
struct __declspec(align(8)) EnvironmentLightTexture__Fields {
    struct Vector2 Offset;
    struct Vector2 Scale;
    float Rotation;
    struct Color Color;
    struct Texture2D* Texture;
    float TurbulenceStrength;
    float TurbulenceSpeed;
    float TurbulenceBias;
    struct Vector2 TurbulenceScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvironmentLightTexture__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnvironmentLightTexture__Fields_FWDDECL
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_EnvironmentLightTexture__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentLightTexture__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnvironmentLightTexture__Fields_FWDDECL)
#include <Modloader/app/structs/EnvironmentLightTexture__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvironmentLightTexture__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
