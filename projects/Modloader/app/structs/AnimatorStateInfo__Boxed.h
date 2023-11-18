#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorStateInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorStateInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorStateInfo__Boxed_DEFINED)
#include <Modloader/app/structs/AnimatorStateInfo.h>
#if defined(IL2CPP_STRUCT_AnimatorStateInfo_DEFINED)
#define IL2CPP_STRUCT_AnimatorStateInfo__Boxed_DEFINED
struct AnimatorStateInfo__Class;
struct AnimatorStateInfo__Boxed {
    struct AnimatorStateInfo__Class* klass;
    MonitorData* monitor;
    struct AnimatorStateInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorStateInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_AnimatorStateInfo__Boxed_FWDDECL
#include <Modloader/app/structs/AnimatorStateInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimatorStateInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorStateInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorStateInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/AnimatorStateInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorStateInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
