#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MocupAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MocupAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MocupAnimator_DEFINED)
#include <Modloader/app/structs/MocupAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_MocupAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_MocupAnimator_DEFINED
struct MocupAnimator__Class;
struct MocupAnimator {
    struct MocupAnimator__Class* klass;
    MonitorData* monitor;
    struct MocupAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MocupAnimator_FWDDECL)
#define IL2CPP_STRUCT_MocupAnimator_FWDDECL
#include <Modloader/app/structs/MocupAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_MocupAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MocupAnimator_DEFINED) && !defined(IL2CPP_STRUCT_MocupAnimator_FWDDECL)
#include <Modloader/app/structs/MocupAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MocupAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
