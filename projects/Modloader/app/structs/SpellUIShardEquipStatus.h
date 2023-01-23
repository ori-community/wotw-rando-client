#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIShardEquipStatus_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIShardEquipStatus_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIShardEquipStatus_DEFINED)
#include <Modloader/app/structs/SpellUIShardEquipStatus__Fields.h>
#if defined(IL2CPP_STRUCT_SpellUIShardEquipStatus__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellUIShardEquipStatus_DEFINED
struct SpellUIShardEquipStatus__Class;
struct SpellUIShardEquipStatus {
    struct SpellUIShardEquipStatus__Class* klass;
    MonitorData* monitor;
    struct SpellUIShardEquipStatus__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUIShardEquipStatus_FWDDECL)
#define IL2CPP_STRUCT_SpellUIShardEquipStatus_FWDDECL
#include <Modloader/app/structs/SpellUIShardEquipStatus__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellUIShardEquipStatus_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIShardEquipStatus_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIShardEquipStatus_FWDDECL)
#include <Modloader/app/structs/SpellUIShardEquipStatus.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIShardEquipStatus.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
