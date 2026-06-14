#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FaderAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FaderAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderAnimator_DEFINED)
#include <Modloader/app/structs/FaderAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_FaderAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_FaderAnimator_DEFINED
struct FaderAnimator__Class;
struct FaderAnimator {
    struct FaderAnimator__Class* klass;
    MonitorData* monitor;
    struct FaderAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FaderAnimator_FWDDECL)
#define IL2CPP_STRUCT_FaderAnimator_FWDDECL
#include <Modloader/app/structs/FaderAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_FaderAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderAnimator_DEFINED) && !defined(IL2CPP_STRUCT_FaderAnimator_FWDDECL)
#include <Modloader/app/structs/FaderAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FaderAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
