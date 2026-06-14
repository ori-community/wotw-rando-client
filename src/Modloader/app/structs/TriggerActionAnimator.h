#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriggerActionAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriggerActionAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerActionAnimator_DEFINED)
#include <Modloader/app/structs/TriggerActionAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_TriggerActionAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_TriggerActionAnimator_DEFINED
struct TriggerActionAnimator__Class;
struct TriggerActionAnimator {
    struct TriggerActionAnimator__Class* klass;
    MonitorData* monitor;
    struct TriggerActionAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriggerActionAnimator_FWDDECL)
#define IL2CPP_STRUCT_TriggerActionAnimator_FWDDECL
#include <Modloader/app/structs/TriggerActionAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_TriggerActionAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerActionAnimator_DEFINED) && !defined(IL2CPP_STRUCT_TriggerActionAnimator_FWDDECL)
#include <Modloader/app/structs/TriggerActionAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriggerActionAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
