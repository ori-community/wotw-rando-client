#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Wwise::SoundListenerReference {
    IL2CPP_REGISTER_METHOD(0x001FEA80, void, ctor, (app::SoundListenerReference__Boxed * this_ptr, app::ISoundListener* listener))
    IL2CPP_REGISTER_METHOD(0x001FEA90, bool, get_IsValid, (app::SoundListenerReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::ISoundListener*, get_Listener, (app::SoundListenerReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C10, int64_t, get_Version, (app::SoundListenerReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FEAA0, bool, Equals_1, (app::SoundListenerReference__Boxed * this_ptr, app::SoundListenerReference other))
    IL2CPP_REGISTER_METHOD(0x001FEB00, bool, Equals_2, (app::SoundListenerReference__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x001FEC10, int32_t, GetHashCode, (app::SoundListenerReference__Boxed * this_ptr))
} // namespace app::classes::Moon::Wwise::SoundListenerReference
