#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIShardEquipStatus__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIShardEquipStatus__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIShardEquipStatus__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_EquipmentType__Enum_DEFINED)
#define IL2CPP_STRUCT_SpellUIShardEquipStatus__Fields_DEFINED
struct Transform;
struct GameObject;
struct MessageProvider;
struct SpellUIShardEquipStatus__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Pivot;
    struct GameObject* TextDescription;
    struct GameObject* TextName;
    struct GameObject* Icon;
    struct MessageProvider* Description;
    struct Color ColorDescription;
    struct Color ColorName;
    EquipmentType__Enum m_equipment;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUIShardEquipStatus__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellUIShardEquipStatus__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpellUIShardEquipStatus__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIShardEquipStatus__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIShardEquipStatus__Fields_FWDDECL)
#include <Modloader/app/structs/SpellUIShardEquipStatus__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIShardEquipStatus__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
