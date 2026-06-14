#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeStructs_RemoteClass_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeStructs_RemoteClass_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_RemoteClass_DEFINED)
#define IL2CPP_STRUCT_RuntimeStructs_RemoteClass_DEFINED
struct RuntimeStructs_MonoClass;
struct RuntimeStructs_RemoteClass {
    void* default_vtable;
    void* xdomain_vtable;
    struct RuntimeStructs_MonoClass* proxy_class;
    void* proxy_class_name;
    uint32_t interface_count;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeStructs_RemoteClass_FWDDECL)
#define IL2CPP_STRUCT_RuntimeStructs_RemoteClass_FWDDECL
#include <Modloader/app/structs/RuntimeStructs_MonoClass.h>
#endif
#undef IL2CPP_STRUCT_RuntimeStructs_RemoteClass_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_RemoteClass_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeStructs_RemoteClass_FWDDECL)
#include <Modloader/app/structs/RuntimeStructs_RemoteClass.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeStructs_RemoteClass.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
