#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::WaitWhile {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::WaitWhile * this_ptr, app::Func_1_Boolean_* predicate))
    IL2CPP_REGISTER_METHOD(0x02C79A20, bool, get_keepWaiting, (app::WaitWhile * this_ptr))
} // namespace app::classes::UnityEngine::WaitWhile
