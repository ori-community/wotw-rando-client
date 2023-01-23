#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LockPlayerInputManualAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LockPlayerInputManualAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockPlayerInputManualAction_DEFINED)
#include <Modloader/app/structs/LockPlayerInputManualAction__Fields.h>
#if defined(IL2CPP_STRUCT_LockPlayerInputManualAction__Fields_DEFINED)
#define IL2CPP_STRUCT_LockPlayerInputManualAction_DEFINED
struct LockPlayerInputManualAction__Class;
struct LockPlayerInputManualAction {
    struct LockPlayerInputManualAction__Class* klass;
    MonitorData* monitor;
    struct LockPlayerInputManualAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LockPlayerInputManualAction_FWDDECL)
#define IL2CPP_STRUCT_LockPlayerInputManualAction_FWDDECL
#include <Modloader/app/structs/LockPlayerInputManualAction__Class.h>
#endif
#undef IL2CPP_STRUCT_LockPlayerInputManualAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockPlayerInputManualAction_DEFINED) && !defined(IL2CPP_STRUCT_LockPlayerInputManualAction_FWDDECL)
#include <Modloader/app/structs/LockPlayerInputManualAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LockPlayerInputManualAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
