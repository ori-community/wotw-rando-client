#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderTime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderTime_DEFINED)
#define IL2CPP_STRUCT_ShaderTime_DEFINED
struct ShaderTime__Class;
struct ShaderTime {
    struct ShaderTime__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderTime_FWDDECL)
#define IL2CPP_STRUCT_ShaderTime_FWDDECL
#include <Modloader/app/structs/ShaderTime__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderTime_DEFINED) && !defined(IL2CPP_STRUCT_ShaderTime_FWDDECL)
#include <Modloader/app/structs/ShaderTime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderTime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
