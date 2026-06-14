#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DofAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DofAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DofAnimator_DEFINED)
#include <Modloader/app/structs/DofAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_DofAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_DofAnimator_DEFINED
struct DofAnimator__Class;
struct DofAnimator {
    struct DofAnimator__Class* klass;
    MonitorData* monitor;
    struct DofAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DofAnimator_FWDDECL)
#define IL2CPP_STRUCT_DofAnimator_FWDDECL
#include <Modloader/app/structs/DofAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_DofAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DofAnimator_DEFINED) && !defined(IL2CPP_STRUCT_DofAnimator_FWDDECL)
#include <Modloader/app/structs/DofAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DofAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
