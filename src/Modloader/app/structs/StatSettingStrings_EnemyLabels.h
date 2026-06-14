#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatSettingStrings_EnemyLabels_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatSettingStrings_EnemyLabels_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSettingStrings_EnemyLabels_DEFINED)
#include <Modloader/app/structs/StatSettingStrings_EnemyEnum__Enum.h>
#if defined(IL2CPP_STRUCT_StatSettingStrings_EnemyEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_StatSettingStrings_EnemyLabels_DEFINED
struct MessageProvider;
struct StatSettingStrings_EnemyLabels {
    StatSettingStrings_EnemyEnum__Enum Enemy;

    struct MessageProvider* EnemyName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatSettingStrings_EnemyLabels_FWDDECL)
#define IL2CPP_STRUCT_StatSettingStrings_EnemyLabels_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_StatSettingStrings_EnemyLabels_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSettingStrings_EnemyLabels_DEFINED) && !defined(IL2CPP_STRUCT_StatSettingStrings_EnemyLabels_FWDDECL)
#include <Modloader/app/structs/StatSettingStrings_EnemyLabels.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatSettingStrings_EnemyLabels.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
