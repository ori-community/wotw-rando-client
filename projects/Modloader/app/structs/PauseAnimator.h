#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PauseAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PauseAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseAnimator_DEFINED)
#include <Modloader/app/structs/PauseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_PauseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_PauseAnimator_DEFINED
struct PauseAnimator__Class;
struct PauseAnimator {
    struct PauseAnimator__Class* klass;
    MonitorData* monitor;
    struct PauseAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PauseAnimator_FWDDECL)
#define IL2CPP_STRUCT_PauseAnimator_FWDDECL
#include <Modloader/app/structs/PauseAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_PauseAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseAnimator_DEFINED) && !defined(IL2CPP_STRUCT_PauseAnimator_FWDDECL)
#include <Modloader/app/structs/PauseAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PauseAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
