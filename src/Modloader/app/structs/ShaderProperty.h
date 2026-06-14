#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderProperty_DEFINED)
#define IL2CPP_STRUCT_ShaderProperty_DEFINED
struct String;
struct ShaderProperty {
    struct String* m_name;
    int32_t m_id;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderProperty_FWDDECL)
#define IL2CPP_STRUCT_ShaderProperty_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ShaderProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderProperty_DEFINED) && !defined(IL2CPP_STRUCT_ShaderProperty_FWDDECL)
#include <Modloader/app/structs/ShaderProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
