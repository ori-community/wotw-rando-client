#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>

namespace app::classes::UISoundSettingsAsset {
    IL2CPP_REGISTER_METHOD(0x013DCDF0, void, PlaySoundEvent, (app::UISoundSettingsAsset * this_ptr, app::Event_1* sound_event))
    IL2CPP_REGISTER_METHOD(0x013DCEC0, app::WwiseEventSystem_SoundHandle, AllocateLoopingSoundHandle, (app::UISoundSettingsAsset * this_ptr, app::Event_1* sound_event))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::UISoundSettingsAsset * this_ptr))
} // namespace app::classes::UISoundSettingsAsset
