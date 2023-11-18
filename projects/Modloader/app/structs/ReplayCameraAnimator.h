#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayCameraAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayCameraAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayCameraAnimator_DEFINED)
#include <Modloader/app/structs/ReplayCameraAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_ReplayCameraAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_ReplayCameraAnimator_DEFINED
struct ReplayCameraAnimator__Class;
struct ReplayCameraAnimator {
    struct ReplayCameraAnimator__Class* klass;
    MonitorData* monitor;
    struct ReplayCameraAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayCameraAnimator_FWDDECL)
#define IL2CPP_STRUCT_ReplayCameraAnimator_FWDDECL
#include <Modloader/app/structs/ReplayCameraAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_ReplayCameraAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayCameraAnimator_DEFINED) && !defined(IL2CPP_STRUCT_ReplayCameraAnimator_FWDDECL)
#include <Modloader/app/structs/ReplayCameraAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayCameraAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
