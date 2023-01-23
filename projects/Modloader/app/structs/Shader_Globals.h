#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Shader_Globals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Shader_Globals_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shader_Globals_DEFINED)
#define IL2CPP_STRUCT_Shader_Globals_DEFINED
struct Shader_Globals__Class;
struct Shader_Globals {
    struct Shader_Globals__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Shader_Globals_FWDDECL)
#define IL2CPP_STRUCT_Shader_Globals_FWDDECL
#include <Modloader/app/structs/Shader_Globals__Class.h>
#endif
#undef IL2CPP_STRUCT_Shader_Globals_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shader_Globals_DEFINED) && !defined(IL2CPP_STRUCT_Shader_Globals_FWDDECL)
#include <Modloader/app/structs/Shader_Globals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Shader_Globals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
