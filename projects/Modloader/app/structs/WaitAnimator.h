#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitAnimator_DEFINED)
#include <Modloader/app/structs/WaitAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_WaitAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitAnimator_DEFINED
struct WaitAnimator__Class;
struct WaitAnimator {
    struct WaitAnimator__Class* klass;
    MonitorData* monitor;
    struct WaitAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitAnimator_FWDDECL)
#define IL2CPP_STRUCT_WaitAnimator_FWDDECL
#include <Modloader/app/structs/WaitAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitAnimator_DEFINED) && !defined(IL2CPP_STRUCT_WaitAnimator_FWDDECL)
#include <Modloader/app/structs/WaitAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
