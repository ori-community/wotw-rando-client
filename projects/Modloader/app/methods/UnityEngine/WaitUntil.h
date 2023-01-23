#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WaitUntil.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>

namespace app::classes::UnityEngine::WaitUntil {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::WaitUntil * this_ptr, app::Func_1_Boolean_* predicate))
    IL2CPP_REGISTER_METHOD(0x02C79980, bool, get_keepWaiting, (app::WaitUntil * this_ptr))
} // namespace app::classes::UnityEngine::WaitUntil
