#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebPermissionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebPermissionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebPermissionAttribute_DEFINED)
#include <Modloader/app/structs/WebPermissionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_WebPermissionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_WebPermissionAttribute_DEFINED
struct WebPermissionAttribute__Class;
struct WebPermissionAttribute {
    struct WebPermissionAttribute__Class* klass;
    MonitorData* monitor;
    struct WebPermissionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebPermissionAttribute_FWDDECL)
#define IL2CPP_STRUCT_WebPermissionAttribute_FWDDECL
#include <Modloader/app/structs/WebPermissionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_WebPermissionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebPermissionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_WebPermissionAttribute_FWDDECL)
#include <Modloader/app/structs/WebPermissionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebPermissionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
