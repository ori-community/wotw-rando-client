#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyContactSwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyContactSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyContactSwitch_DEFINED)
#include <Modloader/app/structs/LegacyContactSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyContactSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyContactSwitch_DEFINED
struct LegacyContactSwitch__Class;
struct LegacyContactSwitch {
    struct LegacyContactSwitch__Class* klass;
    MonitorData* monitor;
    struct LegacyContactSwitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyContactSwitch_FWDDECL)
#define IL2CPP_STRUCT_LegacyContactSwitch_FWDDECL
#include <Modloader/app/structs/LegacyContactSwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyContactSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyContactSwitch_DEFINED) && !defined(IL2CPP_STRUCT_LegacyContactSwitch_FWDDECL)
#include <Modloader/app/structs/LegacyContactSwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyContactSwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
