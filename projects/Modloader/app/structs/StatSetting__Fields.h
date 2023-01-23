#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatSetting__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatSetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSetting__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#include <Modloader/app/structs/StatSetting_StatDisplayCategory__Enum.h>
#include <Modloader/app/structs/StatSetting_StatFormat__Enum.h>
#include <Modloader/app/structs/StatSetting_StatSource__Enum.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_StatSetting_StatDisplayCategory__Enum_DEFINED) && defined(IL2CPP_STRUCT_StatSetting_StatSource__Enum_DEFINED) && defined(IL2CPP_STRUCT_StatSetting_StatFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_StatSetting__Fields_DEFINED
struct MessageProvider;
struct Texture2D;
struct MoonReference_1_IGenericUberState_;
struct ConditionUberState;
struct StatSettingStrings;
struct StatSetting__Fields {
    struct ScriptableObject__Fields _;
    struct MessageProvider* Description;
    struct Texture2D* Icon;
    StatSetting_StatDisplayCategory__Enum Category;

    StatSetting_StatSource__Enum DataSource;

    StatSetting_StatFormat__Enum NumberFormat;

    struct MoonReference_1_IGenericUberState_* UberState;
    struct ConditionUberState* StatUnlocked;
    struct StatSettingStrings* Settings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatSetting__Fields_FWDDECL)
#define IL2CPP_STRUCT_StatSetting__Fields_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonReference_1_IGenericUberState_.h>
#include <Modloader/app/structs/StatSettingStrings.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_StatSetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSetting__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StatSetting__Fields_FWDDECL)
#include <Modloader/app/structs/StatSetting__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatSetting__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
