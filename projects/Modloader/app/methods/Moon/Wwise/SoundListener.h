#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Wwise::SoundListener {
    IL2CPP_REGISTER_METHOD(0x010790F0, app::Vector3, get_PositionOffset, (app::SoundListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270CB90, void, Reregister, (app::SoundListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270CC90, app::Vector3, get_Position, (app::SoundListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270CDF0, void, OnEnable, (app::SoundListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270CF60, void, ResetTracking, ())
    IL2CPP_REGISTER_METHOD(0x0270D060, void, OnDrawGizmos, (app::SoundListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::SoundListener * this_ptr))
} // namespace app::classes::Moon::Wwise::SoundListener
