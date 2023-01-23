#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatSettingStrings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatSettingStrings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSettingStrings__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_StatSettingStrings__Fields_DEFINED
struct StatSettingStrings_EnemyLabels__Array;
struct StatSettingStrings_EquipmentLabels__Array;
struct StatSettingStrings__Fields {
    struct ScriptableObject__Fields _;
    struct StatSettingStrings_EnemyLabels__Array* EnemyEnumLabels;
    struct StatSettingStrings_EquipmentLabels__Array* AbilityEnumLabels;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatSettingStrings__Fields_FWDDECL)
#define IL2CPP_STRUCT_StatSettingStrings__Fields_FWDDECL
#include <Modloader/app/structs/StatSettingStrings_EnemyLabels__Array.h>
#include <Modloader/app/structs/StatSettingStrings_EquipmentLabels__Array.h>
#endif
#undef IL2CPP_STRUCT_StatSettingStrings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSettingStrings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StatSettingStrings__Fields_FWDDECL)
#include <Modloader/app/structs/StatSettingStrings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatSettingStrings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
