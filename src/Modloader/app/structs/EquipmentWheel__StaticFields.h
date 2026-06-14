#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentWheel__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentWheel__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentWheel__StaticFields_DEFINED)
#define IL2CPP_STRUCT_EquipmentWheel__StaticFields_DEFINED
struct EquipmentWheel;
struct HashSet_1_EquipmentType_;
struct List_1_EquipmentType_;
struct EquipmentWheel__StaticFields {
    struct EquipmentWheel* Instance;
    struct HashSet_1_EquipmentType_* s_tempEquipmentTypesWithRestrictions;
    struct List_1_EquipmentType_* s_equipmentTypeValues;
    struct List_1_EquipmentType_* m_validEquipmentTypes;
};
#endif
#if !defined(IL2CPP_STRUCT_EquipmentWheel__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EquipmentWheel__StaticFields_FWDDECL
#include <Modloader/app/structs/EquipmentWheel.h>
#include <Modloader/app/structs/HashSet_1_EquipmentType_.h>
#include <Modloader/app/structs/List_1_EquipmentType_.h>
#endif
#undef IL2CPP_STRUCT_EquipmentWheel__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentWheel__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentWheel__StaticFields_FWDDECL)
#include <Modloader/app/structs/EquipmentWheel__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentWheel__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
