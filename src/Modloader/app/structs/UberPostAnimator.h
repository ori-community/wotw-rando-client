#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPostAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPostAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostAnimator_DEFINED)
#include <Modloader/app/structs/UberPostAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_UberPostAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPostAnimator_DEFINED
struct UberPostAnimator__Class;
struct UberPostAnimator {
    struct UberPostAnimator__Class* klass;
    MonitorData* monitor;
    struct UberPostAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPostAnimator_FWDDECL)
#define IL2CPP_STRUCT_UberPostAnimator_FWDDECL
#include <Modloader/app/structs/UberPostAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPostAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostAnimator_DEFINED) && !defined(IL2CPP_STRUCT_UberPostAnimator_FWDDECL)
#include <Modloader/app/structs/UberPostAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPostAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
