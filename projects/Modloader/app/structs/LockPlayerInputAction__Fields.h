#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LockPlayerInputAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LockPlayerInputAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockPlayerInputAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionWithDuration__Fields.h>
#if defined(IL2CPP_STRUCT_ActionWithDuration__Fields_DEFINED)
#define IL2CPP_STRUCT_LockPlayerInputAction__Fields_DEFINED
struct LockPlayerInputAction__Fields {
    struct ActionWithDuration__Fields _;
    float DurationPlayerCantMove;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LockPlayerInputAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_LockPlayerInputAction__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LockPlayerInputAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockPlayerInputAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LockPlayerInputAction__Fields_FWDDECL)
#include <Modloader/app/structs/LockPlayerInputAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LockPlayerInputAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
