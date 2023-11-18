#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderAnimationTimeDriver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderAnimationTimeDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderAnimationTimeDriver_DEFINED)
#include <Modloader/app/structs/ShaderAnimationTimeDriver__Fields.h>
#if defined(IL2CPP_STRUCT_ShaderAnimationTimeDriver__Fields_DEFINED)
#define IL2CPP_STRUCT_ShaderAnimationTimeDriver_DEFINED
struct ShaderAnimationTimeDriver__Class;
struct ShaderAnimationTimeDriver {
    struct ShaderAnimationTimeDriver__Class* klass;
    MonitorData* monitor;
    struct ShaderAnimationTimeDriver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShaderAnimationTimeDriver_FWDDECL)
#define IL2CPP_STRUCT_ShaderAnimationTimeDriver_FWDDECL
#include <Modloader/app/structs/ShaderAnimationTimeDriver__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderAnimationTimeDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderAnimationTimeDriver_DEFINED) && !defined(IL2CPP_STRUCT_ShaderAnimationTimeDriver_FWDDECL)
#include <Modloader/app/structs/ShaderAnimationTimeDriver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderAnimationTimeDriver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
