#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderPrewarmer_PrewarmedShader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderPrewarmer_PrewarmedShader_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmer_PrewarmedShader_DEFINED)
#define IL2CPP_STRUCT_UberShaderPrewarmer_PrewarmedShader_DEFINED
struct Shader;
struct List_1_System_String_;
struct UberShaderPrewarmer_PrewarmedShader {
    struct Shader* Shader;
    struct List_1_System_String_* ShaderKeywords;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmer_PrewarmedShader_FWDDECL)
#define IL2CPP_STRUCT_UberShaderPrewarmer_PrewarmedShader_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_UberShaderPrewarmer_PrewarmedShader_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmer_PrewarmedShader_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderPrewarmer_PrewarmedShader_FWDDECL)
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
