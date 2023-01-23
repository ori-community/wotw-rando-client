#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Shader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Shader_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shader_DEFINED)
#include <Modloader/app/structs/Shader__Fields.h>
#if defined(IL2CPP_STRUCT_Shader__Fields_DEFINED)
#define IL2CPP_STRUCT_Shader_DEFINED
struct Shader__Class;
struct Shader {
    struct Shader__Class* klass;
    MonitorData* monitor;
    struct Shader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Shader_FWDDECL)
#define IL2CPP_STRUCT_Shader_FWDDECL
#include <Modloader/app/structs/Shader__Class.h>
#endif
#undef IL2CPP_STRUCT_Shader_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shader_DEFINED) && !defined(IL2CPP_STRUCT_Shader_FWDDECL)
#include <Modloader/app/structs/Shader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Shader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
