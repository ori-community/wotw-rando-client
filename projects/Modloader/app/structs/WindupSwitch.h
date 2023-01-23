#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindupSwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindupSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindupSwitch_DEFINED)
#include <Modloader/app/structs/WindupSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_WindupSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_WindupSwitch_DEFINED
struct WindupSwitch__Class;
struct WindupSwitch {
    struct WindupSwitch__Class* klass;
    MonitorData* monitor;
    struct WindupSwitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindupSwitch_FWDDECL)
#define IL2CPP_STRUCT_WindupSwitch_FWDDECL
#include <Modloader/app/structs/WindupSwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_WindupSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindupSwitch_DEFINED) && !defined(IL2CPP_STRUCT_WindupSwitch_FWDDECL)
#include <Modloader/app/structs/WindupSwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindupSwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
