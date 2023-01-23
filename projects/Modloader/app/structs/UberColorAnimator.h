#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberColorAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberColorAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberColorAnimator_DEFINED)
#include <Modloader/app/structs/UberColorAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_UberColorAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_UberColorAnimator_DEFINED
struct UberColorAnimator__Class;
struct UberColorAnimator {
    struct UberColorAnimator__Class* klass;
    MonitorData* monitor;
    struct UberColorAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberColorAnimator_FWDDECL)
#define IL2CPP_STRUCT_UberColorAnimator_FWDDECL
#include <Modloader/app/structs/UberColorAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_UberColorAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberColorAnimator_DEFINED) && !defined(IL2CPP_STRUCT_UberColorAnimator_FWDDECL)
#include <Modloader/app/structs/UberColorAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberColorAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
