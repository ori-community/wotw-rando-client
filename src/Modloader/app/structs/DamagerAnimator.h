#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamagerAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamagerAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamagerAnimator_DEFINED)
#include <Modloader/app/structs/DamagerAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_DamagerAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_DamagerAnimator_DEFINED
struct DamagerAnimator__Class;
struct DamagerAnimator {
    struct DamagerAnimator__Class* klass;
    MonitorData* monitor;
    struct DamagerAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamagerAnimator_FWDDECL)
#define IL2CPP_STRUCT_DamagerAnimator_FWDDECL
#include <Modloader/app/structs/DamagerAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_DamagerAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamagerAnimator_DEFINED) && !defined(IL2CPP_STRUCT_DamagerAnimator_FWDDECL)
#include <Modloader/app/structs/DamagerAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamagerAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
