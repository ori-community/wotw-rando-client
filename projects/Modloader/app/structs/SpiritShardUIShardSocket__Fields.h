#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardUIShardSocket__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardUIShardSocket__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardUIShardSocket__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SpiritShardUIShardSocket__Fields_DEFINED
struct Renderer;
struct SpiritShardUIShardBackdrop;
struct GameObject;
struct SpiritShardUIShardUpgradeFill;
struct ActionMethod;
struct PlayerUberStateShards_Shard;
struct SpiritShardUIShardSocket__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct Renderer* IconRenderer;
    struct Color TextColor;
    struct SpiritShardUIShardBackdrop* Background;
    struct GameObject* EmptyBackgroundGO;
    struct GameObject* UpgradableBackgroundGO;
    struct GameObject* NotUpgradableBackgroundGO;
    struct SpiritShardUIShardUpgradeFill* Fill;
    struct ActionMethod* OnShardAssigned;
    struct Color NormalColor;
    struct Color UpgradableColor;
    struct PlayerUberStateShards_Shard* m_spiritShard;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardUIShardSocket__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardUIShardSocket__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SpiritShardUIShardBackdrop.h>
#include <Modloader/app/structs/SpiritShardUIShardUpgradeFill.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardUIShardSocket__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardUIShardSocket__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardUIShardSocket__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardUIShardSocket__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardUIShardSocket__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
