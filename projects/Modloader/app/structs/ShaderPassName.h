#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderPassName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderPassName_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderPassName_DEFINED)
#define IL2CPP_STRUCT_ShaderPassName_DEFINED
struct ShaderPassName {
    int32_t m_NameIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderPassName_FWDDECL)
#define IL2CPP_STRUCT_ShaderPassName_FWDDECL
#endif
#undef IL2CPP_STRUCT_ShaderPassName_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderPassName_DEFINED) && !defined(IL2CPP_STRUCT_ShaderPassName_FWDDECL)
#include <Modloader/app/structs/ShaderPassName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderPassName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
