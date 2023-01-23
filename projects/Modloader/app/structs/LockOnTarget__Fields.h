#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LockOnTarget__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LockOnTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockOnTarget__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LockOnTarget__Fields_DEFINED
struct IAttackable;
struct LockOnTarget__Fields {
    struct MonoBehaviour__Fields _;
    struct IAttackable* Target;
    int32_t NumberOfLocks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LockOnTarget__Fields_FWDDECL)
#define IL2CPP_STRUCT_LockOnTarget__Fields_FWDDECL
#include <Modloader/app/structs/IAttackable.h>
#endif
#undef IL2CPP_STRUCT_LockOnTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockOnTarget__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LockOnTarget__Fields_FWDDECL)
#include <Modloader/app/structs/LockOnTarget__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LockOnTarget__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
