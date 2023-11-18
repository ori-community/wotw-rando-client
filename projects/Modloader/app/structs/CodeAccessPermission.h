#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CodeAccessPermission_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CodeAccessPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodeAccessPermission_DEFINED)
#define IL2CPP_STRUCT_CodeAccessPermission_DEFINED
struct CodeAccessPermission__Class;
struct CodeAccessPermission {
    struct CodeAccessPermission__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CodeAccessPermission_FWDDECL)
#define IL2CPP_STRUCT_CodeAccessPermission_FWDDECL
#include <Modloader/app/structs/CodeAccessPermission__Class.h>
#endif
#undef IL2CPP_STRUCT_CodeAccessPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodeAccessPermission_DEFINED) && !defined(IL2CPP_STRUCT_CodeAccessPermission_FWDDECL)
#include <Modloader/app/structs/CodeAccessPermission.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CodeAccessPermission.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
