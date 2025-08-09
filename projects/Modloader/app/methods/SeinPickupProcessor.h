#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/EnergyOrbPickup.h>
#include <Modloader/app/structs/ExpOrbPickup.h>
#include <Modloader/app/structs/KeystonePickup.h>
#include <Modloader/app/structs/MapStonePickup.h>
#include <Modloader/app/structs/MaxEnergyContainerPickup.h>
#include <Modloader/app/structs/MaxEnergyHalfContainerPickup.h>
#include <Modloader/app/structs/MaxHealthContainerPickup.h>
#include <Modloader/app/structs/MaxHealthHalfContainerPickup.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>
#include <Modloader/app/structs/OrePickup.h>
#include <Modloader/app/structs/PickupBase.h>
#include <Modloader/app/structs/QuestItemPickup.h>
#include <Modloader/app/structs/RestoreHealthPickup.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinPickupProcessor.h>
#include <Modloader/app/structs/SeinPickupProcessor_CollectableInfo.h>
#include <Modloader/app/structs/SeinPickupProcessor_PickupProcessorState__Enum.h>
#include <Modloader/app/structs/ShardSlotUpgradePickup.h>
#include <Modloader/app/structs/SkillPointPickup.h>
#include <Modloader/app/structs/SpiritShardPickup.h>

namespace app::classes::SeinPickupProcessor {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AreFirstTimeHintsEnabled, app::SeinPickupProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B0730, bool, get_IsPerformingSequence, app::SeinPickupProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B0740, void, OnEnable, app::SeinPickupProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B0CD0, void, OnDisable, app::SeinPickupProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B1260, void, Update, app::SeinPickupProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B14D0, void, ChangeState, app::SeinPickupProcessor* this_ptr, app::SeinPickupProcessor_PickupProcessorState__Enum state)
    IL2CPP_REGISTER_METHOD(0x008B1530, void, OnRestoreCheckpoint, app::SeinPickupProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B1530, void, OnTimelineFinished, app::SeinPickupProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B1550, void, OnShowItem, app::SeinPickupProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x008B17F0,
        void,
        PerformPickupSequence,
        app::SeinPickupProcessor* this_ptr,
        app::SeinPickupProcessor_CollectableInfo* collectable_info
    )
    IL2CPP_REGISTER_METHOD(
        0x008B1BF0,
        void,
        SetHasBeenCollectedBefore,
        app::SeinPickupProcessor* this_ptr,
        app::SeinPickupProcessor_CollectableInfo* collectable_info
    )
    IL2CPP_REGISTER_METHOD(
        0x008B1E80,
        bool,
        GetHasBeenCollectedBefore,
        app::SeinPickupProcessor* this_ptr,
        app::SeinPickupProcessor_CollectableInfo* collectable_info
    )
    IL2CPP_REGISTER_METHOD(0x008B20D0, void, OnFinishedReading, app::SeinPickupProcessor* this_ptr, app::MessageBox_HideAction__Enum hide_action)
    IL2CPP_REGISTER_METHOD(0x008B2320, void, OnCollectSkillPointPickup, app::SeinPickupProcessor* this_ptr, app::SkillPointPickup* skill_point_pickup)
    IL2CPP_REGISTER_METHOD(0x008B2600, void, OnCollectQuestItemPickup, app::SeinPickupProcessor* this_ptr, app::QuestItemPickup* quest_item_pickup)
    IL2CPP_REGISTER_METHOD(0x008B2A00, void, OnCollectedShardSlotUpgrade, app::SeinPickupProcessor* this_ptr, app::ShardSlotUpgradePickup* shard_slot_pickup)
    IL2CPP_REGISTER_METHOD(0x008B2C80, void, OnCollectEnergyOrbPickup, app::SeinPickupProcessor* this_ptr, app::EnergyOrbPickup* energy_orb_pickup)
    IL2CPP_REGISTER_METHOD(0x008B2F90, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(
        0x008B3030,
        void,
        OnCollectMaxEnergyContainerPickup,
        app::SeinPickupProcessor* this_ptr,
        app::MaxEnergyContainerPickup* energy_container_pickup
    )
    IL2CPP_REGISTER_METHOD(
        0x008B3410,
        void,
        OnCollectMaxEnergyHalfContainerPickup,
        app::SeinPickupProcessor* this_ptr,
        app::MaxEnergyHalfContainerPickup* energy_container_pickup
    )
    IL2CPP_REGISTER_METHOD(0x008B3AB0, void, OnCollectOrePickup, app::SeinPickupProcessor* this_ptr, app::OrePickup* ore_pickup)
    IL2CPP_REGISTER_METHOD(0x008B3D80, void, OnCollectPickup, app::SeinPickupProcessor* this_ptr, app::PickupBase* pickup)
    IL2CPP_REGISTER_METHOD(0x008B4560, void, OnCollectExpOrbPickup, app::SeinPickupProcessor* this_ptr, app::ExpOrbPickup* exp_orb_pickup)
    IL2CPP_REGISTER_METHOD(0x008B49B0, void, OnCollectKeystonePickup, app::SeinPickupProcessor* this_ptr, app::KeystonePickup* keystone_pickup)
    IL2CPP_REGISTER_METHOD(
        0x008B4CB0,
        void,
        OnCollectMaxHealthContainerPickup,
        app::SeinPickupProcessor* this_ptr,
        app::MaxHealthContainerPickup* max_health_container_pickup
    )
    IL2CPP_REGISTER_METHOD(
        0x008B4FF0,
        void,
        OnCollectMaxHealthHalfContainerPickup,
        app::SeinPickupProcessor* this_ptr,
        app::MaxHealthHalfContainerPickup* max_health_container_pickup
    )
    IL2CPP_REGISTER_METHOD(0x008B5630, void, OnCollectRestoreHealthPickup, app::SeinPickupProcessor* this_ptr, app::RestoreHealthPickup* restore_health_pickup)
    IL2CPP_REGISTER_METHOD(0x008B5830, void, OnCollectMapStonePickup, app::SeinPickupProcessor* this_ptr, app::MapStonePickup* map_stone_pickup)
    IL2CPP_REGISTER_METHOD(0x008B5AE0, void, OnCollectSpiritShardPickup, app::SeinPickupProcessor* this_ptr, app::SpiritShardPickup* spirit_shard_pickup)
    IL2CPP_REGISTER_METHOD(0x008B5DA0, void, SetReferenceToSein, app::SeinPickupProcessor* this_ptr, app::SeinCharacter* sein)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, app::SeinPickupProcessor* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x008B5DD0, void, ctor, app::SeinPickupProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B6E60, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x008B6FF0, void, _OnCollectMaxEnergyHalfContainerPickup_b__56_0, app::SeinPickupProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B72E0, void, _OnCollectMaxEnergyHalfContainerPickup_b__56_1, app::SeinPickupProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B75D0, void, _OnCollectMaxHealthHalfContainerPickup_b__62_0, app::SeinPickupProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B78C0, void, _OnCollectMaxHealthHalfContainerPickup_b__62_1, app::SeinPickupProcessor* this_ptr)
} // namespace app::classes::SeinPickupProcessor
