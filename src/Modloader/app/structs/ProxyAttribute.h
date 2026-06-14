#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProxyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProxyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyAttribute_DEFINED)
#define IL2CPP_STRUCT_ProxyAttribute_DEFINED
struct ProxyAttribute__Class;
struct ProxyAttribute {
    struct ProxyAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ProxyAttribute_FWDDECL)
#define IL2CPP_STRUCT_ProxyAttribute_FWDDECL
#include <Modloader/app/structs/ProxyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ProxyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProxyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ProxyAttribute_FWDDECL)
#include <Modloader/app/structs/ProxyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProxyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
