#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderID_Led_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderID_Led_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_Led_DEFINED)
#define IL2CPP_STRUCT_ShaderID_Led_DEFINED
struct ShaderID_Led__Class;
struct ShaderID_Led {
    struct ShaderID_Led__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderID_Led_FWDDECL)
#define IL2CPP_STRUCT_ShaderID_Led_FWDDECL
#include <Modloader/app/structs/ShaderID_Led__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderID_Led_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_Led_DEFINED) && !defined(IL2CPP_STRUCT_ShaderID_Led_FWDDECL)
#include <Modloader/app/structs/ShaderID_Led.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderID_Led.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
