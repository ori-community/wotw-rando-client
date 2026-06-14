#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LagoonContactSwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LagoonContactSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_LagoonContactSwitch_DEFINED)
#include <Modloader/app/structs/LagoonContactSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_LagoonContactSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_LagoonContactSwitch_DEFINED
struct LagoonContactSwitch__Class;
struct LagoonContactSwitch {
    struct LagoonContactSwitch__Class* klass;
    MonitorData* monitor;
    struct LagoonContactSwitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LagoonContactSwitch_FWDDECL)
#define IL2CPP_STRUCT_LagoonContactSwitch_FWDDECL
#include <Modloader/app/structs/LagoonContactSwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_LagoonContactSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_LagoonContactSwitch_DEFINED) && !defined(IL2CPP_STRUCT_LagoonContactSwitch_FWDDECL)
#include <Modloader/app/structs/LagoonContactSwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LagoonContactSwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
