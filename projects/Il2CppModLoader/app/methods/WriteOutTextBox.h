#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WriteOutTextBox {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::WriteOutTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00592F30, void, Awake, (app::WriteOutTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00592FE0, void, Start, (app::WriteOutTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00593030, void, OnTextChange, (app::WriteOutTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005930D0, void, OnDestroy, (app::WriteOutTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::WriteOutTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00593180, void, SampleValue, (app::WriteOutTextBox * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x005931F0, void, SetValue, (app::WriteOutTextBox * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::WriteOutTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00593220, float, get_Duration, (app::WriteOutTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00593280, float, AppearTime, (app::WriteOutTextBox * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x005932E0, void, RestoreToOriginalState, (app::WriteOutTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00593310, bool, get_AtEnd, (app::WriteOutTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00593360, void, GoToStart, (app::WriteOutTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005933A0, void, GoToEnd, (app::WriteOutTextBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00593410, void, ctor, (app::WriteOutTextBox * this_ptr))
}
