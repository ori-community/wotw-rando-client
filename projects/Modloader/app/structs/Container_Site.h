#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Container_Site_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Container_Site_INITIALIZING
#if !defined(IL2CPP_STRUCT_Container_Site_DEFINED)
#include <Modloader/app/structs/Container_Site__Fields.h>
#if defined(IL2CPP_STRUCT_Container_Site__Fields_DEFINED)
#define IL2CPP_STRUCT_Container_Site_DEFINED
struct Container_Site__Class;
struct Container_Site {
    struct Container_Site__Class* klass;
    MonitorData* monitor;
    struct Container_Site__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Container_Site_FWDDECL)
#define IL2CPP_STRUCT_Container_Site_FWDDECL
#include <Modloader/app/structs/Container_Site__Class.h>
#endif
#undef IL2CPP_STRUCT_Container_Site_INITIALIZING
#if !defined(IL2CPP_STRUCT_Container_Site_DEFINED) && !defined(IL2CPP_STRUCT_Container_Site_FWDDECL)
#include <Modloader/app/structs/Container_Site.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Container_Site.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
