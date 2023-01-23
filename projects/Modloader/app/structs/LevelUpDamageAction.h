#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LevelUpDamageAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LevelUpDamageAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LevelUpDamageAction_DEFINED)
#include <Modloader/app/structs/LevelUpDamageAction__Fields.h>
#if defined(IL2CPP_STRUCT_LevelUpDamageAction__Fields_DEFINED)
#define IL2CPP_STRUCT_LevelUpDamageAction_DEFINED
struct LevelUpDamageAction__Class;
struct LevelUpDamageAction {
    struct LevelUpDamageAction__Class* klass;
    MonitorData* monitor;
    struct LevelUpDamageAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LevelUpDamageAction_FWDDECL)
#define IL2CPP_STRUCT_LevelUpDamageAction_FWDDECL
#include <Modloader/app/structs/LevelUpDamageAction__Class.h>
#endif
#undef IL2CPP_STRUCT_LevelUpDamageAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LevelUpDamageAction_DEFINED) && !defined(IL2CPP_STRUCT_LevelUpDamageAction_FWDDECL)
#include <Modloader/app/structs/LevelUpDamageAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LevelUpDamageAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
