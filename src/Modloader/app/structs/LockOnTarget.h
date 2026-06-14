#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LockOnTarget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LockOnTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockOnTarget_DEFINED)
#include <Modloader/app/structs/LockOnTarget__Fields.h>
#if defined(IL2CPP_STRUCT_LockOnTarget__Fields_DEFINED)
#define IL2CPP_STRUCT_LockOnTarget_DEFINED
struct LockOnTarget__Class;
struct LockOnTarget {
    struct LockOnTarget__Class* klass;
    MonitorData* monitor;
    struct LockOnTarget__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LockOnTarget_FWDDECL)
#define IL2CPP_STRUCT_LockOnTarget_FWDDECL
#include <Modloader/app/structs/LockOnTarget__Class.h>
#endif
#undef IL2CPP_STRUCT_LockOnTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockOnTarget_DEFINED) && !defined(IL2CPP_STRUCT_LockOnTarget_FWDDECL)
#include <Modloader/app/structs/LockOnTarget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LockOnTarget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
