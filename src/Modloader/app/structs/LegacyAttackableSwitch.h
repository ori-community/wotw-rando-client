#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyAttackableSwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyAttackableSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAttackableSwitch_DEFINED)
#include <Modloader/app/structs/LegacyAttackableSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAttackableSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyAttackableSwitch_DEFINED
struct LegacyAttackableSwitch__Class;
struct LegacyAttackableSwitch {
    struct LegacyAttackableSwitch__Class* klass;
    MonitorData* monitor;
    struct LegacyAttackableSwitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyAttackableSwitch_FWDDECL)
#define IL2CPP_STRUCT_LegacyAttackableSwitch_FWDDECL
#include <Modloader/app/structs/LegacyAttackableSwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyAttackableSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAttackableSwitch_DEFINED) && !defined(IL2CPP_STRUCT_LegacyAttackableSwitch_FWDDECL)
#include <Modloader/app/structs/LegacyAttackableSwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyAttackableSwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
