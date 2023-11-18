#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialProperties__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialProperties__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialProperties__Fields_DEFINED)
#define IL2CPP_STRUCT_MaterialProperties__Fields_DEFINED
struct OverridableShaderProperty;
struct Dictionary_2_System_String_OverridableTextureProperty_;
struct Dictionary_2_System_String_OverridableFloatProperty_;
struct Dictionary_2_System_String_OverridableColorProperty_;
struct __declspec(align(8)) MaterialProperties__Fields {
    struct OverridableShaderProperty* Shader;
    struct Dictionary_2_System_String_OverridableTextureProperty_* TextureProperties;
    struct Dictionary_2_System_String_OverridableFloatProperty_* FloatProperties;
    struct Dictionary_2_System_String_OverridableColorProperty_* ColorProperties;
};
#endif
#if !defined(IL2CPP_STRUCT_MaterialProperties__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaterialProperties__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_OverridableColorProperty_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_OverridableFloatProperty_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_OverridableTextureProperty_.h>
#include <Modloader/app/structs/OverridableShaderProperty.h>
#endif
#undef IL2CPP_STRUCT_MaterialProperties__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialProperties__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaterialProperties__Fields_FWDDECL)
#include <Modloader/app/structs/MaterialProperties__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialProperties__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
