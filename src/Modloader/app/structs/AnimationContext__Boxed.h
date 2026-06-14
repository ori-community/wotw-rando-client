#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationContext__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationContext__Boxed_DEFINED)
#include <Modloader/app/structs/AnimationContext.h>
#if defined(IL2CPP_STRUCT_AnimationContext_DEFINED)
#define IL2CPP_STRUCT_AnimationContext__Boxed_DEFINED
struct AnimationContext__Class;
struct AnimationContext__Boxed {
    struct AnimationContext__Class* klass;
    MonitorData* monitor;
    struct AnimationContext fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationContext__Boxed_FWDDECL)
#define IL2CPP_STRUCT_AnimationContext__Boxed_FWDDECL
#include <Modloader/app/structs/AnimationContext__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationContext__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_AnimationContext__Boxed_FWDDECL)
#include <Modloader/app/structs/AnimationContext__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationContext__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
