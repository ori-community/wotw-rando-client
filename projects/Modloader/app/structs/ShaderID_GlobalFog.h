#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderID_GlobalFog_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderID_GlobalFog_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_GlobalFog_DEFINED)
#define IL2CPP_STRUCT_ShaderID_GlobalFog_DEFINED
struct ShaderID_GlobalFog__Class;
struct ShaderID_GlobalFog {
    struct ShaderID_GlobalFog__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderID_GlobalFog_FWDDECL)
#define IL2CPP_STRUCT_ShaderID_GlobalFog_FWDDECL
#include <Modloader/app/structs/ShaderID_GlobalFog__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderID_GlobalFog_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_GlobalFog_DEFINED) && !defined(IL2CPP_STRUCT_ShaderID_GlobalFog_FWDDECL)
#include <Modloader/app/structs/ShaderID_GlobalFog.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderID_GlobalFog.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
