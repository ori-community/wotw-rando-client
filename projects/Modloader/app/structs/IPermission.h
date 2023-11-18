#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPermission_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPermission_DEFINED)
#define IL2CPP_STRUCT_IPermission_DEFINED
struct IPermission__Class;
struct IPermission {
    struct IPermission__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPermission_FWDDECL)
#define IL2CPP_STRUCT_IPermission_FWDDECL
#include <Modloader/app/structs/IPermission__Class.h>
#endif
#undef IL2CPP_STRUCT_IPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPermission_DEFINED) && !defined(IL2CPP_STRUCT_IPermission_FWDDECL)
#include <Modloader/app/structs/IPermission.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPermission.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
