#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LockPlayerInputAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LockPlayerInputAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockPlayerInputAction_DEFINED)
#include <Modloader/app/structs/LockPlayerInputAction__Fields.h>
#if defined(IL2CPP_STRUCT_LockPlayerInputAction__Fields_DEFINED)
#define IL2CPP_STRUCT_LockPlayerInputAction_DEFINED
struct LockPlayerInputAction__Class;
struct LockPlayerInputAction {
    struct LockPlayerInputAction__Class* klass;
    MonitorData* monitor;
    struct LockPlayerInputAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LockPlayerInputAction_FWDDECL)
#define IL2CPP_STRUCT_LockPlayerInputAction_FWDDECL
#include <Modloader/app/structs/LockPlayerInputAction__Class.h>
#endif
#undef IL2CPP_STRUCT_LockPlayerInputAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockPlayerInputAction_DEFINED) && !defined(IL2CPP_STRUCT_LockPlayerInputAction_FWDDECL)
#include <Modloader/app/structs/LockPlayerInputAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LockPlayerInputAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
