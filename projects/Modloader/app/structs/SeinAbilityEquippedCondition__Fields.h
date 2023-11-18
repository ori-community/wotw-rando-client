#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinAbilityEquippedCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinAbilityEquippedCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAbilityEquippedCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_EquipmentType__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinAbilityEquippedCondition__Fields_DEFINED
struct SeinAbilityEquippedCondition__Fields {
    struct Condition_1__Fields _;
    EquipmentType__Enum equipment;

    bool equipped;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinAbilityEquippedCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinAbilityEquippedCondition__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinAbilityEquippedCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAbilityEquippedCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinAbilityEquippedCondition__Fields_FWDDECL)
#include <Modloader/app/structs/SeinAbilityEquippedCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinAbilityEquippedCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
