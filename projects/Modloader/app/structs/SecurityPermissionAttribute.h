#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityPermissionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityPermissionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityPermissionAttribute_DEFINED)
#include <Modloader/app/structs/SecurityPermissionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SecurityPermissionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityPermissionAttribute_DEFINED
struct SecurityPermissionAttribute__Class;
struct SecurityPermissionAttribute {
    struct SecurityPermissionAttribute__Class* klass;
    MonitorData* monitor;
    struct SecurityPermissionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityPermissionAttribute_FWDDECL)
#define IL2CPP_STRUCT_SecurityPermissionAttribute_FWDDECL
#include <Modloader/app/structs/SecurityPermissionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityPermissionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityPermissionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SecurityPermissionAttribute_FWDDECL)
#include <Modloader/app/structs/SecurityPermissionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityPermissionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
