#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_AudioClip_System_Single_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_AudioClip_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UnityEngine_AudioClip_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BCDF80, bool, TryGetValue, app::Dictionary_2_UnityEngine_AudioClip_System_Single_* this_ptr, app::AudioClip* key, float* value)
    IL2CPP_REGISTER_METHOD(0x02BBBD40, void, set_Item, app::Dictionary_2_UnityEngine_AudioClip_System_Single_* this_ptr, app::AudioClip* key, float value)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_AudioClip_System_Single_
