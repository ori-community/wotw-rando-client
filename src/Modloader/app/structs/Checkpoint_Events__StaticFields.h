#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Checkpoint_Events__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Checkpoint_Events__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Checkpoint_Events__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Checkpoint_Events__StaticFields_DEFINED
struct UberDelegate;
struct Checkpoint_Events__StaticFields {
    struct UberDelegate* OnPreRestore;
    struct UberDelegate* OnPostRestore;
    struct UberDelegate* OnScrollLockPassed;
    struct UberDelegate* OnPreCreate;
    struct UberDelegate* OnPostCreate;
};
#endif
#if !defined(IL2CPP_STRUCT_Checkpoint_Events__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Checkpoint_Events__StaticFields_FWDDECL
#include <Modloader/app/structs/UberDelegate.h>
#endif
#undef IL2CPP_STRUCT_Checkpoint_Events__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Checkpoint_Events__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Checkpoint_Events__StaticFields_FWDDECL)
#include <Modloader/app/structs/Checkpoint_Events__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Checkpoint_Events__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
