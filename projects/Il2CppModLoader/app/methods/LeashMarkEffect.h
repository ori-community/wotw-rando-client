#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LeashMarkEffect {
    IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (app::LeashMarkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (app::LeashMarkEffect * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x015C6CC0, bool, get_IsShowing, (app::LeashMarkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C6CD0, void, OnPoolSpawned, (app::LeashMarkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::LeashMarkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C6D80, void, ShowMark, (app::LeashMarkEffect * this_ptr, bool show_direction))
    IL2CPP_REGISTER_METHOD(0x015C6F20, void, HideMark, (app::LeashMarkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C6F40, app::IEnumerator *, DelayedDestroyInactive, (app::LeashMarkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C7090, void, ChangeState, (app::LeashMarkEffect * this_ptr, app::LeashMarkEffect_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x015C7640, void, FixedUpdate, (app::LeashMarkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::LeashMarkEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C7A60, void, _ChangeState_b__19_0, (app::LeashMarkEffect * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731060, LeashMarkEffect__ChangeState_b__19_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015C7A90, void, _ChangeState_b__19_1, (app::LeashMarkEffect * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476BE10, LeashMarkEffect__ChangeState_b__19_1__MethodInfo)
}
