#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceSet_DEFINED)
#include <Modloader/app/structs/ResourceSet__Fields.h>
#if defined(IL2CPP_STRUCT_ResourceSet__Fields_DEFINED)
#define IL2CPP_STRUCT_ResourceSet_DEFINED
struct ResourceSet__Class;
struct ResourceSet {
    struct ResourceSet__Class* klass;
    MonitorData* monitor;
    struct ResourceSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResourceSet_FWDDECL)
#define IL2CPP_STRUCT_ResourceSet_FWDDECL
#include <Modloader/app/structs/ResourceSet__Class.h>
#endif
#undef IL2CPP_STRUCT_ResourceSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceSet_DEFINED) && !defined(IL2CPP_STRUCT_ResourceSet_FWDDECL)
#include <Modloader/app/structs/ResourceSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
