#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::WaitUntil {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::WaitUntil * this_ptr, app::Func_1_Boolean_ * predicate))
    IL2CPP_REGISTER_METHOD(0x02C79980, bool, get_keepWaiting, (app::WaitUntil * this_ptr))
}
