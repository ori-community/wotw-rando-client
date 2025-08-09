#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioMixer.h>
#include <Modloader/app/structs/AudioMixerGroup.h>
#include <Modloader/app/structs/MixerGroupType__Enum.h>
#include <Modloader/app/structs/MixerManager.h>
#include <Modloader/app/structs/MixerSnapshot.h>
#include <Modloader/app/structs/MixerSnapshotZone.h>

namespace app::classes::MixerManager {
    IL2CPP_REGISTER_METHOD(0x0132C7D0, void, RegisterSnapshotZone, app::MixerManager* this_ptr, app::MixerSnapshotZone* mixer_snapshot_zone)
    IL2CPP_REGISTER_METHOD(0x0132C870, void, DeregisterSnapshotZone, app::MixerManager* this_ptr, app::MixerSnapshotZone* mixer_snapshot_zone)
    IL2CPP_REGISTER_METHOD(0x0132C910, void, Awake, app::MixerManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132C9C0, app::MixerManager*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x0132CA60, void, RegisterActiveSnapshot, app::MixerManager* this_ptr, app::MixerSnapshot* snapshot)
    IL2CPP_REGISTER_METHOD(0x0132CB30, void, FixedUpdate, app::MixerManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132CCB0, void, UpdateMixerSettingsBasedOnActiveSnapshots, app::MixerManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132D220, void, UpdateMixerSnapshotZones, app::MixerManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132D770, app::AudioMixer*, GetMasterMixer, )
    IL2CPP_REGISTER_METHOD(0x0132D950, app::AudioMixerGroup*, GetMixerGroup, app::MixerGroupType__Enum group)
    IL2CPP_REGISTER_METHOD(0x0132E410, void, WarmUpResource, )
    IL2CPP_REGISTER_METHOD(0x0132E4A0, void, ctor, app::MixerManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132E740, void, cctor, )
} // namespace app::classes::MixerManager
