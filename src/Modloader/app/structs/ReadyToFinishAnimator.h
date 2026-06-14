#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReadyToFinishAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReadyToFinishAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadyToFinishAnimator_DEFINED)
#include <Modloader/app/structs/ReadyToFinishAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_ReadyToFinishAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_ReadyToFinishAnimator_DEFINED
struct ReadyToFinishAnimator__Class;
struct ReadyToFinishAnimator {
    struct ReadyToFinishAnimator__Class* klass;
    MonitorData* monitor;
    struct ReadyToFinishAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReadyToFinishAnimator_FWDDECL)
#define IL2CPP_STRUCT_ReadyToFinishAnimator_FWDDECL
#include <Modloader/app/structs/ReadyToFinishAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_ReadyToFinishAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadyToFinishAnimator_DEFINED) && !defined(IL2CPP_STRUCT_ReadyToFinishAnimator_FWDDECL)
#include <Modloader/app/structs/ReadyToFinishAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReadyToFinishAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
