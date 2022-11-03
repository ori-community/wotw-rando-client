#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Fader {
    IL2CPP_REGISTER_METHOD(0x0098FFA0, void, ChangeState, (app::Fader * this_ptr, app::Fader_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x0098FFB0, void, UpdateState, (app::Fader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990260, void, Start, (app::Fader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009903E0, void, ForceToOpaque, (app::Fader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009903F0, void, OnFadeInFinished, (app::Fader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009905A0, void, OnFadeOutFinished, (app::Fader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009905C0, void, FixedUpdate, (app::Fader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990600, void, SetOpacity, (app::Fader * this_ptr, float opacity))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSuspended, (app::Fader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsSuspended, (app::Fader * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00990720, void, ctor, (app::Fader * this_ptr))
} // namespace app::classes::Fader
