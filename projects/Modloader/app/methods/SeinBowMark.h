#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinBowMark {
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsSuspended, (app::SeinBowMark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsSuspended, (app::SeinBowMark * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00DA16B0, void, OnPoolSpawned, (app::SeinBowMark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA18C0, void, OnPoolDespawned, (app::SeinBowMark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA18D0, void, DisappearMark, (app::SeinBowMark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA19A0, void, ChangeState, (app::SeinBowMark * this_ptr, app::SeinBowMark_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00DA1A80, void, FixedUpdate, (app::SeinBowMark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA1D60, void, UpdateState, (app::SeinBowMark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA1DF0, void, UpdateDisappearingState, (app::SeinBowMark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdatePlayingState, (app::SeinBowMark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA2030, void, UpdateAppearingState, (app::SeinBowMark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA2300, void, HideMark, (app::SeinBowMark * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA2320, void, ctor, (app::SeinBowMark * this_ptr))
} // namespace app::classes::SeinBowMark
