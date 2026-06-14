#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderID_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderID_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_DEFINED)
#define IL2CPP_STRUCT_ShaderID_DEFINED
struct ShaderID__Class;
struct ShaderID {
    struct ShaderID__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderID_FWDDECL)
#define IL2CPP_STRUCT_ShaderID_FWDDECL
#include <Modloader/app/structs/ShaderID__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderID_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_DEFINED) && !defined(IL2CPP_STRUCT_ShaderID_FWDDECL)
#include <Modloader/app/structs/ShaderID.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderID.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
