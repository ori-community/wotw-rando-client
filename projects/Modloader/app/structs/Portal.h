#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Portal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Portal_INITIALIZING
#if !defined(IL2CPP_STRUCT_Portal_DEFINED)
#include <Modloader/app/structs/Portal__Fields.h>
#if defined(IL2CPP_STRUCT_Portal__Fields_DEFINED)
#define IL2CPP_STRUCT_Portal_DEFINED
struct Portal__Class;
struct Portal {
    struct Portal__Class* klass;
    MonitorData* monitor;
    struct Portal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Portal_FWDDECL)
#define IL2CPP_STRUCT_Portal_FWDDECL
#include <Modloader/app/structs/Portal__Class.h>
#endif
#undef IL2CPP_STRUCT_Portal_INITIALIZING
#if !defined(IL2CPP_STRUCT_Portal_DEFINED) && !defined(IL2CPP_STRUCT_Portal_FWDDECL)
#include <Modloader/app/structs/Portal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Portal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
