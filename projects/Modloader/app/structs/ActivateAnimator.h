#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateAnimator_DEFINED)
#include <Modloader/app/structs/ActivateAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_ActivateAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateAnimator_DEFINED
struct ActivateAnimator__Class;
struct ActivateAnimator {
    struct ActivateAnimator__Class* klass;
    MonitorData* monitor;
    struct ActivateAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateAnimator_FWDDECL)
#define IL2CPP_STRUCT_ActivateAnimator_FWDDECL
#include <Modloader/app/structs/ActivateAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivateAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateAnimator_DEFINED) && !defined(IL2CPP_STRUCT_ActivateAnimator_FWDDECL)
#include <Modloader/app/structs/ActivateAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
