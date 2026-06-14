#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContactSwitchSequencer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContactSwitchSequencer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactSwitchSequencer_DEFINED)
#include <Modloader/app/structs/ContactSwitchSequencer__Fields.h>
#if defined(IL2CPP_STRUCT_ContactSwitchSequencer__Fields_DEFINED)
#define IL2CPP_STRUCT_ContactSwitchSequencer_DEFINED
struct ContactSwitchSequencer__Class;
struct ContactSwitchSequencer {
    struct ContactSwitchSequencer__Class* klass;
    MonitorData* monitor;
    struct ContactSwitchSequencer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContactSwitchSequencer_FWDDECL)
#define IL2CPP_STRUCT_ContactSwitchSequencer_FWDDECL
#include <Modloader/app/structs/ContactSwitchSequencer__Class.h>
#endif
#undef IL2CPP_STRUCT_ContactSwitchSequencer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactSwitchSequencer_DEFINED) && !defined(IL2CPP_STRUCT_ContactSwitchSequencer_FWDDECL)
#include <Modloader/app/structs/ContactSwitchSequencer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContactSwitchSequencer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
