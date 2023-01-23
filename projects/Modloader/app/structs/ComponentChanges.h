#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComponentChanges_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComponentChanges_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentChanges_DEFINED)
#include <Modloader/app/structs/ComponentChanges__Fields.h>
#if defined(IL2CPP_STRUCT_ComponentChanges__Fields_DEFINED)
#define IL2CPP_STRUCT_ComponentChanges_DEFINED
struct ComponentChanges__Class;
struct ComponentChanges {
    struct ComponentChanges__Class* klass;
    MonitorData* monitor;
    struct ComponentChanges__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComponentChanges_FWDDECL)
#define IL2CPP_STRUCT_ComponentChanges_FWDDECL
#include <Modloader/app/structs/ComponentChanges__Class.h>
#endif
#undef IL2CPP_STRUCT_ComponentChanges_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentChanges_DEFINED) && !defined(IL2CPP_STRUCT_ComponentChanges_FWDDECL)
#include <Modloader/app/structs/ComponentChanges.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComponentChanges.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
