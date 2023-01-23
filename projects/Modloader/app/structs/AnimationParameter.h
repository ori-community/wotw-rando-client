#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationParameter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationParameter_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationParameter_DEFINED)
#include <Modloader/app/structs/AnimationParameter__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationParameter__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationParameter_DEFINED
struct AnimationParameter__Class;
struct AnimationParameter {
    struct AnimationParameter__Class* klass;
    MonitorData* monitor;
    struct AnimationParameter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationParameter_FWDDECL)
#define IL2CPP_STRUCT_AnimationParameter_FWDDECL
#include <Modloader/app/structs/AnimationParameter__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationParameter_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationParameter_DEFINED) && !defined(IL2CPP_STRUCT_AnimationParameter_FWDDECL)
#include <Modloader/app/structs/AnimationParameter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationParameter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
