#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashableSwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashableSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashableSwitch_DEFINED)
#include <Modloader/app/structs/DashableSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_DashableSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_DashableSwitch_DEFINED
struct DashableSwitch__Class;
struct DashableSwitch {
    struct DashableSwitch__Class* klass;
    MonitorData* monitor;
    struct DashableSwitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashableSwitch_FWDDECL)
#define IL2CPP_STRUCT_DashableSwitch_FWDDECL
#include <Modloader/app/structs/DashableSwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_DashableSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashableSwitch_DEFINED) && !defined(IL2CPP_STRUCT_DashableSwitch_FWDDECL)
#include <Modloader/app/structs/DashableSwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashableSwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
