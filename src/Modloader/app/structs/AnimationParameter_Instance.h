#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationParameter_Instance_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationParameter_Instance_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationParameter_Instance_DEFINED)
#define IL2CPP_STRUCT_AnimationParameter_Instance_DEFINED
struct AnimationParameter_Instance__Class;
struct AnimationParameter_Instance {
    struct AnimationParameter_Instance__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationParameter_Instance_FWDDECL)
#define IL2CPP_STRUCT_AnimationParameter_Instance_FWDDECL
#include <Modloader/app/structs/AnimationParameter_Instance__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationParameter_Instance_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationParameter_Instance_DEFINED) && !defined(IL2CPP_STRUCT_AnimationParameter_Instance_FWDDECL)
#include <Modloader/app/structs/AnimationParameter_Instance.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationParameter_Instance.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
