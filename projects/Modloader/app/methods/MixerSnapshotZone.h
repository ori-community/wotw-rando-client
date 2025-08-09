#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MixerSnapshotZone.h>

namespace app::classes::MixerSnapshotZone {
    IL2CPP_REGISTER_METHOD(0x0132EE60, app::Bounds, get_Bounds, app::MixerSnapshotZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132F070, void, OnEnable, app::MixerSnapshotZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132F1B0, void, OnDisable, app::MixerSnapshotZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132F340, void, UpdateSnapshotZoneState, app::MixerSnapshotZone* this_ptr, bool is_zone_active)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::MixerSnapshotZone* this_ptr)
} // namespace app::classes::MixerSnapshotZone
