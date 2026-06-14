#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContactSwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContactSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactSwitch_DEFINED)
#include <Modloader/app/structs/ContactSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_ContactSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_ContactSwitch_DEFINED
struct ContactSwitch__Class;
struct ContactSwitch {
    struct ContactSwitch__Class* klass;
    MonitorData* monitor;
    struct ContactSwitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContactSwitch_FWDDECL)
#define IL2CPP_STRUCT_ContactSwitch_FWDDECL
#include <Modloader/app/structs/ContactSwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_ContactSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactSwitch_DEFINED) && !defined(IL2CPP_STRUCT_ContactSwitch_FWDDECL)
#include <Modloader/app/structs/ContactSwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContactSwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
