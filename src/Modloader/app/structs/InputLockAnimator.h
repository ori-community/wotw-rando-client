#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputLockAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputLockAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputLockAnimator_DEFINED)
#include <Modloader/app/structs/InputLockAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_InputLockAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_InputLockAnimator_DEFINED
struct InputLockAnimator__Class;
struct InputLockAnimator {
    struct InputLockAnimator__Class* klass;
    MonitorData* monitor;
    struct InputLockAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputLockAnimator_FWDDECL)
#define IL2CPP_STRUCT_InputLockAnimator_FWDDECL
#include <Modloader/app/structs/InputLockAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_InputLockAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputLockAnimator_DEFINED) && !defined(IL2CPP_STRUCT_InputLockAnimator_FWDDECL)
#include <Modloader/app/structs/InputLockAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputLockAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
