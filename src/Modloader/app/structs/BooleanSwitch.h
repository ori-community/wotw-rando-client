#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BooleanSwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BooleanSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanSwitch_DEFINED)
#include <Modloader/app/structs/BooleanSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_BooleanSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_BooleanSwitch_DEFINED
struct BooleanSwitch__Class;
struct BooleanSwitch {
    struct BooleanSwitch__Class* klass;
    MonitorData* monitor;
    struct BooleanSwitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BooleanSwitch_FWDDECL)
#define IL2CPP_STRUCT_BooleanSwitch_FWDDECL
#include <Modloader/app/structs/BooleanSwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_BooleanSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanSwitch_DEFINED) && !defined(IL2CPP_STRUCT_BooleanSwitch_FWDDECL)
#include <Modloader/app/structs/BooleanSwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BooleanSwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
