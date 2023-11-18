#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RiseSinkSwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RiseSinkSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_RiseSinkSwitch_DEFINED)
#include <Modloader/app/structs/RiseSinkSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_RiseSinkSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_RiseSinkSwitch_DEFINED
struct RiseSinkSwitch__Class;
struct RiseSinkSwitch {
    struct RiseSinkSwitch__Class* klass;
    MonitorData* monitor;
    struct RiseSinkSwitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RiseSinkSwitch_FWDDECL)
#define IL2CPP_STRUCT_RiseSinkSwitch_FWDDECL
#include <Modloader/app/structs/RiseSinkSwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_RiseSinkSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_RiseSinkSwitch_DEFINED) && !defined(IL2CPP_STRUCT_RiseSinkSwitch_FWDDECL)
#include <Modloader/app/structs/RiseSinkSwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RiseSinkSwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
