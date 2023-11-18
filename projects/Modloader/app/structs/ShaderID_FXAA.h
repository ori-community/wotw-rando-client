#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderID_FXAA_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderID_FXAA_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_FXAA_DEFINED)
#define IL2CPP_STRUCT_ShaderID_FXAA_DEFINED
struct ShaderID_FXAA__Class;
struct ShaderID_FXAA {
    struct ShaderID_FXAA__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderID_FXAA_FWDDECL)
#define IL2CPP_STRUCT_ShaderID_FXAA_FWDDECL
#include <Modloader/app/structs/ShaderID_FXAA__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderID_FXAA_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_FXAA_DEFINED) && !defined(IL2CPP_STRUCT_ShaderID_FXAA_FWDDECL)
#include <Modloader/app/structs/ShaderID_FXAA.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderID_FXAA.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
