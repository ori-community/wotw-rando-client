#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScaleAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScaleAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleAnimator_DEFINED)
#include <Modloader/app/structs/ScaleAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_ScaleAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_ScaleAnimator_DEFINED
struct ScaleAnimator__Class;
struct ScaleAnimator {
    struct ScaleAnimator__Class* klass;
    MonitorData* monitor;
    struct ScaleAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScaleAnimator_FWDDECL)
#define IL2CPP_STRUCT_ScaleAnimator_FWDDECL
#include <Modloader/app/structs/ScaleAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_ScaleAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleAnimator_DEFINED) && !defined(IL2CPP_STRUCT_ScaleAnimator_FWDDECL)
#include <Modloader/app/structs/ScaleAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScaleAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
