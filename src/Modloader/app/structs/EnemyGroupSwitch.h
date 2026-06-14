#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyGroupSwitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyGroupSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyGroupSwitch_DEFINED)
#include <Modloader/app/structs/EnemyGroupSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyGroupSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyGroupSwitch_DEFINED
struct EnemyGroupSwitch__Class;
struct EnemyGroupSwitch {
    struct EnemyGroupSwitch__Class* klass;
    MonitorData* monitor;
    struct EnemyGroupSwitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyGroupSwitch_FWDDECL)
#define IL2CPP_STRUCT_EnemyGroupSwitch_FWDDECL
#include <Modloader/app/structs/EnemyGroupSwitch__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemyGroupSwitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyGroupSwitch_DEFINED) && !defined(IL2CPP_STRUCT_EnemyGroupSwitch_FWDDECL)
#include <Modloader/app/structs/EnemyGroupSwitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyGroupSwitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
