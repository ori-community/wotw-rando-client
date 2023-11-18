#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorClipInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorClipInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorClipInfo__Boxed_DEFINED)
#include <Modloader/app/structs/AnimatorClipInfo.h>
#if defined(IL2CPP_STRUCT_AnimatorClipInfo_DEFINED)
#define IL2CPP_STRUCT_AnimatorClipInfo__Boxed_DEFINED
struct AnimatorClipInfo__Class;
struct AnimatorClipInfo__Boxed {
    struct AnimatorClipInfo__Class* klass;
    MonitorData* monitor;
    struct AnimatorClipInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorClipInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_AnimatorClipInfo__Boxed_FWDDECL
#include <Modloader/app/structs/AnimatorClipInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimatorClipInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorClipInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorClipInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/AnimatorClipInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorClipInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
