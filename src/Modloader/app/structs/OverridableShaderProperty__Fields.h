#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OverridableShaderProperty__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OverridableShaderProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverridableShaderProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_OverridableShaderProperty__Fields_DEFINED
struct Shader;
struct __declspec(align(8)) OverridableShaderProperty__Fields {
    bool Override;
    struct Shader* Shader;
};
#endif
#if !defined(IL2CPP_STRUCT_OverridableShaderProperty__Fields_FWDDECL)
#define IL2CPP_STRUCT_OverridableShaderProperty__Fields_FWDDECL
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_OverridableShaderProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverridableShaderProperty__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OverridableShaderProperty__Fields_FWDDECL)
#include <Modloader/app/structs/OverridableShaderProperty__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OverridableShaderProperty__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
