#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderID_SMAA_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderID_SMAA_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_SMAA_DEFINED)
#define IL2CPP_STRUCT_ShaderID_SMAA_DEFINED
struct ShaderID_SMAA__Class;
struct ShaderID_SMAA {
    struct ShaderID_SMAA__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderID_SMAA_FWDDECL)
#define IL2CPP_STRUCT_ShaderID_SMAA_FWDDECL
#include <Modloader/app/structs/ShaderID_SMAA__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderID_SMAA_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_SMAA_DEFINED) && !defined(IL2CPP_STRUCT_ShaderID_SMAA_FWDDECL)
#include <Modloader/app/structs/ShaderID_SMAA.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderID_SMAA.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
