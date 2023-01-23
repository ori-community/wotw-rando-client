#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatSettingStrings_EquipmentLabels_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatSettingStrings_EquipmentLabels_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSettingStrings_EquipmentLabels_DEFINED)
#include <Modloader/app/structs/EquipmentType__Enum.h>
#if defined(IL2CPP_STRUCT_EquipmentType__Enum_DEFINED)
#define IL2CPP_STRUCT_StatSettingStrings_EquipmentLabels_DEFINED
struct MessageProvider;
struct StatSettingStrings_EquipmentLabels {
    EquipmentType__Enum Ability;

    struct MessageProvider* Label;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatSettingStrings_EquipmentLabels_FWDDECL)
#define IL2CPP_STRUCT_StatSettingStrings_EquipmentLabels_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_StatSettingStrings_EquipmentLabels_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatSettingStrings_EquipmentLabels_DEFINED) && !defined(IL2CPP_STRUCT_StatSettingStrings_EquipmentLabels_FWDDECL)
#include <Modloader/app/structs/StatSettingStrings_EquipmentLabels.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatSettingStrings_EquipmentLabels.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
