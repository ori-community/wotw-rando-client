#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseAnimator_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseAnimator_DEFINED
struct BaseAnimator__Class;
struct BaseAnimator {
    struct BaseAnimator__Class* klass;
    MonitorData* monitor;
    struct BaseAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseAnimator_FWDDECL)
#define IL2CPP_STRUCT_BaseAnimator_FWDDECL
#include <Modloader/app/structs/BaseAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseAnimator_DEFINED) && !defined(IL2CPP_STRUCT_BaseAnimator_FWDDECL)
#include <Modloader/app/structs/BaseAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
