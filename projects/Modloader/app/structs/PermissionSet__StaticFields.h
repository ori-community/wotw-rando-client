#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PermissionSet__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PermissionSet__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PermissionSet__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PermissionSet__StaticFields_DEFINED
struct Object__Array;
struct PermissionSet__StaticFields {
    struct Object__Array* psUnrestricted;
    struct Object__Array* action;
};
#endif
#if !defined(IL2CPP_STRUCT_PermissionSet__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PermissionSet__StaticFields_FWDDECL
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_PermissionSet__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PermissionSet__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PermissionSet__StaticFields_FWDDECL)
#include <Modloader/app/structs/PermissionSet__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PermissionSet__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
