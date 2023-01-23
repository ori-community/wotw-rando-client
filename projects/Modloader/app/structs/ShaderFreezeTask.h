#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderFreezeTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderFreezeTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderFreezeTask_DEFINED)
#include <Modloader/app/structs/ShaderFreezeTask__Fields.h>
#if defined(IL2CPP_STRUCT_ShaderFreezeTask__Fields_DEFINED)
#define IL2CPP_STRUCT_ShaderFreezeTask_DEFINED
struct ShaderFreezeTask__Class;
struct ShaderFreezeTask {
    struct ShaderFreezeTask__Class* klass;
    MonitorData* monitor;
    struct ShaderFreezeTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShaderFreezeTask_FWDDECL)
#define IL2CPP_STRUCT_ShaderFreezeTask_FWDDECL
#include <Modloader/app/structs/ShaderFreezeTask__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderFreezeTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderFreezeTask_DEFINED) && !defined(IL2CPP_STRUCT_ShaderFreezeTask_FWDDECL)
#include <Modloader/app/structs/ShaderFreezeTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderFreezeTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
