#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MessageDescriptor {
    IL2CPP_REGISTER_METHOD(0x0012E2A0, void, ctor_1, (app::MessageDescriptor__Boxed * this_ptr, app::String* message, app::EmotionType__Enum emotion, app::SoundProvider* sound, app::Event_1* wwise_event))
    IL2CPP_REGISTER_METHOD(0x0012E2C0, void, ctor_2, (app::MessageDescriptor__Boxed * this_ptr, app::String* message))
} // namespace app::classes::MessageDescriptor
