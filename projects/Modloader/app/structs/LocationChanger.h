#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocationChanger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocationChanger_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocationChanger_DEFINED)
#include <Modloader/app/structs/LocationChanger__Fields.h>
#if defined(IL2CPP_STRUCT_LocationChanger__Fields_DEFINED)
#define IL2CPP_STRUCT_LocationChanger_DEFINED
struct LocationChanger__Class;
struct LocationChanger {
    struct LocationChanger__Class* klass;
    MonitorData* monitor;
    struct LocationChanger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocationChanger_FWDDECL)
#define IL2CPP_STRUCT_LocationChanger_FWDDECL
#include <Modloader/app/structs/LocationChanger__Class.h>
#endif
#undef IL2CPP_STRUCT_LocationChanger_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocationChanger_DEFINED) && !defined(IL2CPP_STRUCT_LocationChanger_FWDDECL)
#include <Modloader/app/structs/LocationChanger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocationChanger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
