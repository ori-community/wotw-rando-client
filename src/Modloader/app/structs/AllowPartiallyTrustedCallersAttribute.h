#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AllowPartiallyTrustedCallersAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AllowPartiallyTrustedCallersAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllowPartiallyTrustedCallersAttribute_DEFINED)
#define IL2CPP_STRUCT_AllowPartiallyTrustedCallersAttribute_DEFINED
struct AllowPartiallyTrustedCallersAttribute__Class;
struct AllowPartiallyTrustedCallersAttribute {
    struct AllowPartiallyTrustedCallersAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AllowPartiallyTrustedCallersAttribute_FWDDECL)
#define IL2CPP_STRUCT_AllowPartiallyTrustedCallersAttribute_FWDDECL
#include <Modloader/app/structs/AllowPartiallyTrustedCallersAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AllowPartiallyTrustedCallersAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllowPartiallyTrustedCallersAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AllowPartiallyTrustedCallersAttribute_FWDDECL)
#include <Modloader/app/structs/AllowPartiallyTrustedCallersAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AllowPartiallyTrustedCallersAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
