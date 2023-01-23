#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderID_Levels_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderID_Levels_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_Levels_DEFINED)
#define IL2CPP_STRUCT_ShaderID_Levels_DEFINED
struct ShaderID_Levels__Class;
struct ShaderID_Levels {
    struct ShaderID_Levels__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderID_Levels_FWDDECL)
#define IL2CPP_STRUCT_ShaderID_Levels_FWDDECL
#include <Modloader/app/structs/ShaderID_Levels__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderID_Levels_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_Levels_DEFINED) && !defined(IL2CPP_STRUCT_ShaderID_Levels_FWDDECL)
#include <Modloader/app/structs/ShaderID_Levels.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderID_Levels.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
