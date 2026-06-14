#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceLocator__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceLocator__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceLocator__Boxed_DEFINED)
#include <Modloader/app/structs/ResourceLocator.h>
#if defined(IL2CPP_STRUCT_ResourceLocator_DEFINED)
#define IL2CPP_STRUCT_ResourceLocator__Boxed_DEFINED
struct ResourceLocator__Class;
struct ResourceLocator__Boxed {
    struct ResourceLocator__Class* klass;
    MonitorData* monitor;
    struct ResourceLocator fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResourceLocator__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ResourceLocator__Boxed_FWDDECL
#include <Modloader/app/structs/ResourceLocator__Class.h>
#endif
#undef IL2CPP_STRUCT_ResourceLocator__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceLocator__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ResourceLocator__Boxed_FWDDECL)
#include <Modloader/app/structs/ResourceLocator__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceLocator__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
