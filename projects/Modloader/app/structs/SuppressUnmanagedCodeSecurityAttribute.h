#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuppressUnmanagedCodeSecurityAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuppressUnmanagedCodeSecurityAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuppressUnmanagedCodeSecurityAttribute_DEFINED)
#define IL2CPP_STRUCT_SuppressUnmanagedCodeSecurityAttribute_DEFINED
struct SuppressUnmanagedCodeSecurityAttribute__Class;
struct SuppressUnmanagedCodeSecurityAttribute {
    struct SuppressUnmanagedCodeSecurityAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SuppressUnmanagedCodeSecurityAttribute_FWDDECL)
#define IL2CPP_STRUCT_SuppressUnmanagedCodeSecurityAttribute_FWDDECL
#include <Modloader/app/structs/SuppressUnmanagedCodeSecurityAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SuppressUnmanagedCodeSecurityAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuppressUnmanagedCodeSecurityAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SuppressUnmanagedCodeSecurityAttribute_FWDDECL)
#include <Modloader/app/structs/SuppressUnmanagedCodeSecurityAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuppressUnmanagedCodeSecurityAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
