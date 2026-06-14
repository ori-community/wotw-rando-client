#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPostProcessAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPostProcessAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcessAnimator_DEFINED)
#include <Modloader/app/structs/UberPostProcessAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_UberPostProcessAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPostProcessAnimator_DEFINED
struct UberPostProcessAnimator__Class;
struct UberPostProcessAnimator {
    struct UberPostProcessAnimator__Class* klass;
    MonitorData* monitor;
    struct UberPostProcessAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPostProcessAnimator_FWDDECL)
#define IL2CPP_STRUCT_UberPostProcessAnimator_FWDDECL
#include <Modloader/app/structs/UberPostProcessAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPostProcessAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcessAnimator_DEFINED) && !defined(IL2CPP_STRUCT_UberPostProcessAnimator_FWDDECL)
#include <Modloader/app/structs/UberPostProcessAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPostProcessAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
