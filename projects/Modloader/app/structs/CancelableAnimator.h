#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancelableAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancelableAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancelableAnimator_DEFINED)
#include <Modloader/app/structs/CancelableAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_CancelableAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_CancelableAnimator_DEFINED
struct CancelableAnimator__Class;
struct CancelableAnimator {
    struct CancelableAnimator__Class* klass;
    MonitorData* monitor;
    struct CancelableAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CancelableAnimator_FWDDECL)
#define IL2CPP_STRUCT_CancelableAnimator_FWDDECL
#include <Modloader/app/structs/CancelableAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_CancelableAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancelableAnimator_DEFINED) && !defined(IL2CPP_STRUCT_CancelableAnimator_FWDDECL)
#include <Modloader/app/structs/CancelableAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancelableAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
