#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamedPermissionSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamedPermissionSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamedPermissionSet__Fields_DEFINED)
#include <Modloader/app/structs/PermissionSet__Fields.h>
#if defined(IL2CPP_STRUCT_PermissionSet__Fields_DEFINED)
#define IL2CPP_STRUCT_NamedPermissionSet__Fields_DEFINED
struct String;
struct NamedPermissionSet__Fields {
    struct PermissionSet__Fields _;
    struct String* name;
    struct String* description;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NamedPermissionSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_NamedPermissionSet__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NamedPermissionSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamedPermissionSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NamedPermissionSet__Fields_FWDDECL)
#include <Modloader/app/structs/NamedPermissionSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamedPermissionSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
