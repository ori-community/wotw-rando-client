#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LockRotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LockRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockRotation_DEFINED)
#include <Modloader/app/structs/LockRotation__Fields.h>
#if defined(IL2CPP_STRUCT_LockRotation__Fields_DEFINED)
#define IL2CPP_STRUCT_LockRotation_DEFINED
struct LockRotation__Class;
struct LockRotation {
    struct LockRotation__Class* klass;
    MonitorData* monitor;
    struct LockRotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LockRotation_FWDDECL)
#define IL2CPP_STRUCT_LockRotation_FWDDECL
#include <Modloader/app/structs/LockRotation__Class.h>
#endif
#undef IL2CPP_STRUCT_LockRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockRotation_DEFINED) && !defined(IL2CPP_STRUCT_LockRotation_FWDDECL)
#include <Modloader/app/structs/LockRotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LockRotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
