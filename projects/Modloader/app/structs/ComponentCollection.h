#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComponentCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComponentCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentCollection_DEFINED)
#include <Modloader/app/structs/ComponentCollection__Fields.h>
#if defined(IL2CPP_STRUCT_ComponentCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_ComponentCollection_DEFINED
struct ComponentCollection__Class;
struct ComponentCollection {
    struct ComponentCollection__Class* klass;
    MonitorData* monitor;
    struct ComponentCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComponentCollection_FWDDECL)
#define IL2CPP_STRUCT_ComponentCollection_FWDDECL
#include <Modloader/app/structs/ComponentCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_ComponentCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentCollection_DEFINED) && !defined(IL2CPP_STRUCT_ComponentCollection_FWDDECL)
#include <Modloader/app/structs/ComponentCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComponentCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
