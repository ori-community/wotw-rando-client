#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeashHookAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeashHookAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashHookAnimator_DEFINED)
#include <Modloader/app/structs/LeashHookAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LeashHookAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LeashHookAnimator_DEFINED
struct LeashHookAnimator__Class;
struct LeashHookAnimator {
    struct LeashHookAnimator__Class* klass;
    MonitorData* monitor;
    struct LeashHookAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeashHookAnimator_FWDDECL)
#define IL2CPP_STRUCT_LeashHookAnimator_FWDDECL
#include <Modloader/app/structs/LeashHookAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_LeashHookAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashHookAnimator_DEFINED) && !defined(IL2CPP_STRUCT_LeashHookAnimator_FWDDECL)
#include <Modloader/app/structs/LeashHookAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeashHookAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
