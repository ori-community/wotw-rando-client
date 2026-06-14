#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpringAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpringAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringAnimator_DEFINED)
#include <Modloader/app/structs/SpringAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_SpringAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_SpringAnimator_DEFINED
struct SpringAnimator__Class;
struct SpringAnimator {
    struct SpringAnimator__Class* klass;
    MonitorData* monitor;
    struct SpringAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpringAnimator_FWDDECL)
#define IL2CPP_STRUCT_SpringAnimator_FWDDECL
#include <Modloader/app/structs/SpringAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_SpringAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringAnimator_DEFINED) && !defined(IL2CPP_STRUCT_SpringAnimator_FWDDECL)
#include <Modloader/app/structs/SpringAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpringAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
