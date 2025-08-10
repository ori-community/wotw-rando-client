#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkAudioInputManager_AudioFormatDelegate.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt32_AkAudioInputManager_AudioFormatDelegate_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt32_AkAudioInputManager_AudioFormatDelegate_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_UInt32_AkAudioInputManager_AudioFormatDelegate_* this_ptr, uint32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02F028F0,
        app::AkAudioInputManager_AudioFormatDelegate*,
        get_Item,
        app::Dictionary_2_System_UInt32_AkAudioInputManager_AudioFormatDelegate_* this_ptr,
        uint32_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_UInt32_AkAudioInputManager_AudioFormatDelegate_* this_ptr,
        uint32_t key,
        app::AkAudioInputManager_AudioFormatDelegate* value
    )
    IL2CPP_REGISTER_METHOD(0x02F04070, bool, Remove, app::Dictionary_2_System_UInt32_AkAudioInputManager_AudioFormatDelegate_* this_ptr, uint32_t key)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_UInt32_AkAudioInputManager_AudioFormatDelegate_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt32_AkAudioInputManager_AudioFormatDelegate_
