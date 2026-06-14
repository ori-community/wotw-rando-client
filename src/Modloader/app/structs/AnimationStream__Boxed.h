#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationStream__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationStream__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationStream__Boxed_DEFINED)
#include <Modloader/app/structs/AnimationStream.h>
#if defined(IL2CPP_STRUCT_AnimationStream_DEFINED)
#define IL2CPP_STRUCT_AnimationStream__Boxed_DEFINED
struct AnimationStream__Class;
struct AnimationStream__Boxed {
    struct AnimationStream__Class* klass;
    MonitorData* monitor;
    struct AnimationStream fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationStream__Boxed_FWDDECL)
#define IL2CPP_STRUCT_AnimationStream__Boxed_FWDDECL
#include <Modloader/app/structs/AnimationStream__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationStream__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationStream__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_AnimationStream__Boxed_FWDDECL)
#include <Modloader/app/structs/AnimationStream__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationStream__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
