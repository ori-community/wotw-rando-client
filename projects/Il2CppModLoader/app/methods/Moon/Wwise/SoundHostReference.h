#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Wwise::SoundHostReference {
    IL2CPP_REGISTER_METHOD(0x001FE930, void, ctor, (app::SoundHostReference__Boxed * this_ptr, app::ISoundHost * host))
    IL2CPP_REGISTER_METHOD(0x001FE940, bool, get_IsValid, (app::SoundHostReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FE220, bool, Equals_1, (app::SoundHostReference__Boxed * this_ptr, app::SoundHostReference other))
    IL2CPP_REGISTER_METHOD(0x001FE950, bool, Equals_2, (app::SoundHostReference__Boxed * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x001FE3A0, int32_t, GetHashCode, (app::SoundHostReference__Boxed * this_ptr))
}
