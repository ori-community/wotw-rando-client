#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnAnimationEnded_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnAnimationEnded_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnAnimationEnded_DEFINED)
#define IL2CPP_STRUCT_OnAnimationEnded_DEFINED
struct OnAnimationEnded__Class;
struct OnAnimationEnded {
    struct OnAnimationEnded__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OnAnimationEnded_FWDDECL)
#define IL2CPP_STRUCT_OnAnimationEnded_FWDDECL
#include <Modloader/app/structs/OnAnimationEnded__Class.h>
#endif
#undef IL2CPP_STRUCT_OnAnimationEnded_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnAnimationEnded_DEFINED) && !defined(IL2CPP_STRUCT_OnAnimationEnded_FWDDECL)
#include <Modloader/app/structs/OnAnimationEnded.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnAnimationEnded.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
