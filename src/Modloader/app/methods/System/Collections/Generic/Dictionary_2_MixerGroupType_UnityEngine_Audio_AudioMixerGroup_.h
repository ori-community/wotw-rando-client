#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioMixerGroup.h>
#include <Modloader/app/structs/Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_.h>
#include <Modloader/app/structs/MixerGroupType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_* this_ptr,
        app::MixerGroupType__Enum key,
        app::AudioMixerGroup** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_* this_ptr,
        app::MixerGroupType__Enum key,
        app::AudioMixerGroup* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_MixerGroupType_UnityEngine_Audio_AudioMixerGroup_
