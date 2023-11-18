#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaitForSecondsRealtime.h>

namespace app::classes::UnityEngine::WaitForSecondsRealtime {
    IL2CPP_REGISTER_METHOD(0x02C798A0, void, ctor, (app::WaitForSecondsRealtime * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x02C798B0, float, get_waitTime, (app::WaitForSecondsRealtime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_waitTime, (app::WaitForSecondsRealtime * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02C798C0, bool, get_keepWaiting, (app::WaitForSecondsRealtime * this_ptr))
} // namespace app::classes::UnityEngine::WaitForSecondsRealtime
