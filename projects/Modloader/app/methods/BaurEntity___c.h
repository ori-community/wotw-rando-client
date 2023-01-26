#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaurEntity_c.h>

namespace app::classes::BaurEntity___c {
    IL2CPP_REGISTER_METHOD(0x00F9A1B0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BaurEntity_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, _PlayLookAnimation_b__36_0, (app::BaurEntity_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _OnUnblockedGate_b__41_0, (app::BaurEntity_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _Awakened_b__45_0, (app::BaurEntity_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _UpdateCurrentIdle_b__46_0, (app::BaurEntity_c * this_ptr))
} // namespace app::classes::BaurEntity___c
