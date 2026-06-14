#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoorAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoorAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorAnimator_DEFINED)
#include <Modloader/app/structs/DoorAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_DoorAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_DoorAnimator_DEFINED
struct DoorAnimator__Class;
struct DoorAnimator {
    struct DoorAnimator__Class* klass;
    MonitorData* monitor;
    struct DoorAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoorAnimator_FWDDECL)
#define IL2CPP_STRUCT_DoorAnimator_FWDDECL
#include <Modloader/app/structs/DoorAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_DoorAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorAnimator_DEFINED) && !defined(IL2CPP_STRUCT_DoorAnimator_FWDDECL)
#include <Modloader/app/structs/DoorAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoorAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
