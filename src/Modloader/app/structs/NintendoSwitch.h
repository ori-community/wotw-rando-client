#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NintendoSwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NintendoSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoSwitch_DEFINED)
#include <Modloader/app/structs/NintendoSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_NintendoSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_NintendoSwitch_DEFINED
struct NintendoSwitch__Class;
struct NintendoSwitch {
    struct NintendoSwitch__Class* klass;
    MonitorData* monitor;
    struct NintendoSwitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NintendoSwitch_FWDDECL)
#define IL2CPP_STRUCT_NintendoSwitch_FWDDECL
#include <Modloader/app/structs/NintendoSwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_NintendoSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoSwitch_DEFINED) && !defined(IL2CPP_STRUCT_NintendoSwitch_FWDDECL)
#include <Modloader/app/structs/NintendoSwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NintendoSwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
