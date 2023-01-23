#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Shader_Globals__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Shader_Globals__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shader_Globals__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Shader_Globals__StaticFields_DEFINED
struct Texture2D;
struct Texture;
struct Vector4__Array;
struct Shader_Globals__StaticFields {
    struct Texture2D* m_fogGradientTexture2D;
    struct Texture2D* m_multiplyFogGradientTexture2D;
    int32_t _FogGradientTex;
    int32_t _FogGradientArray;
    int32_t _MultiplyFogGradientTex;
    int32_t _MultiplyFogGradientArray;
    int32_t _FogGradientRange;
    struct Texture* m_fogGradientTexture;
    struct Vector4__Array* m_fogGradientArray;
    struct Texture* m_multiplyFogGradientTexture;
    struct Vector4__Array* m_multiplyFogGradientArray;
};
#endif
#if !defined(IL2CPP_STRUCT_Shader_Globals__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Shader_Globals__StaticFields_FWDDECL
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Vector4__Array.h>
#endif
#undef IL2CPP_STRUCT_Shader_Globals__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shader_Globals__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Shader_Globals__StaticFields_FWDDECL)
#include <Modloader/app/structs/Shader_Globals__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Shader_Globals__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
