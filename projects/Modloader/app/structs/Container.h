#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Container_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Container_INITIALIZING
#if !defined(IL2CPP_STRUCT_Container_DEFINED)
#include <Modloader/app/structs/Container__Fields.h>
#if defined(IL2CPP_STRUCT_Container__Fields_DEFINED)
#define IL2CPP_STRUCT_Container_DEFINED
struct Container__Class;
struct Container {
    struct Container__Class* klass;
    MonitorData* monitor;
    struct Container__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Container_FWDDECL)
#define IL2CPP_STRUCT_Container_FWDDECL
#include <Modloader/app/structs/Container__Class.h>
#endif
#undef IL2CPP_STRUCT_Container_INITIALIZING
#if !defined(IL2CPP_STRUCT_Container_DEFINED) && !defined(IL2CPP_STRUCT_Container_FWDDECL)
#include <Modloader/app/structs/Container.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Container.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
