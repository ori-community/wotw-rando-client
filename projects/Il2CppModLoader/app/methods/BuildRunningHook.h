#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BuildRunningHook {
    IL2CPP_REGISTER_METHOD(0x00815DC0, void, Awake, (app::BuildRunningHook * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00815ED0, void, Update, (app::BuildRunningHook * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00815F90, void, ctor, (app::BuildRunningHook * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::BuildRunningHook
