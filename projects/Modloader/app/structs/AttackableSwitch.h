#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttackableSwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttackableSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackableSwitch_DEFINED)
#include <Modloader/app/structs/AttackableSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_AttackableSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_AttackableSwitch_DEFINED
struct AttackableSwitch__Class;
struct AttackableSwitch {
    struct AttackableSwitch__Class* klass;
    MonitorData* monitor;
    struct AttackableSwitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttackableSwitch_FWDDECL)
#define IL2CPP_STRUCT_AttackableSwitch_FWDDECL
#include <Modloader/app/structs/AttackableSwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_AttackableSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackableSwitch_DEFINED) && !defined(IL2CPP_STRUCT_AttackableSwitch_FWDDECL)
#include <Modloader/app/structs/AttackableSwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttackableSwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
