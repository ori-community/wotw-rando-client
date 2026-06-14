#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Shader_DefaultTextures__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Shader_DefaultTextures__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shader_DefaultTextures__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Shader_DefaultTextures__StaticFields_DEFINED
struct Texture2D;
struct Color__Array;
struct Shader_DefaultTextures__StaticFields {
    struct Texture2D* m_transparent;
    struct Color__Array* m_transparentColorArray128;
};
#endif
#if !defined(IL2CPP_STRUCT_Shader_DefaultTextures__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Shader_DefaultTextures__StaticFields_FWDDECL
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_Shader_DefaultTextures__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shader_DefaultTextures__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Shader_DefaultTextures__StaticFields_FWDDECL)
#include <Modloader/app/structs/Shader_DefaultTextures__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Shader_DefaultTextures__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
