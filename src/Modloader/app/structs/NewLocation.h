#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewLocation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewLocation_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewLocation_DEFINED)
#include <Modloader/app/structs/NewLocation__Fields.h>
#if defined(IL2CPP_STRUCT_NewLocation__Fields_DEFINED)
#define IL2CPP_STRUCT_NewLocation_DEFINED
struct NewLocation__Class;
struct NewLocation {
    struct NewLocation__Class* klass;
    MonitorData* monitor;
    struct NewLocation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewLocation_FWDDECL)
#define IL2CPP_STRUCT_NewLocation_FWDDECL
#include <Modloader/app/structs/NewLocation__Class.h>
#endif
#undef IL2CPP_STRUCT_NewLocation_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewLocation_DEFINED) && !defined(IL2CPP_STRUCT_NewLocation_FWDDECL)
#include <Modloader/app/structs/NewLocation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewLocation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
