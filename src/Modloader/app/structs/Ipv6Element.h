#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ipv6Element_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ipv6Element_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ipv6Element_DEFINED)
#define IL2CPP_STRUCT_Ipv6Element_DEFINED
struct Ipv6Element__Class;
struct Ipv6Element {
    struct Ipv6Element__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Ipv6Element_FWDDECL)
#define IL2CPP_STRUCT_Ipv6Element_FWDDECL
#include <Modloader/app/structs/Ipv6Element__Class.h>
#endif
#undef IL2CPP_STRUCT_Ipv6Element_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ipv6Element_DEFINED) && !defined(IL2CPP_STRUCT_Ipv6Element_FWDDECL)
#include <Modloader/app/structs/Ipv6Element.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ipv6Element.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
