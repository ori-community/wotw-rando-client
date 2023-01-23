#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LockPlayerInputAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::LockPlayerInputAction {
    IL2CPP_REGISTER_METHOD(0x00FC2E10, void, Perform, (app::LockPlayerInputAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC2EA0, void, Stop, (app::LockPlayerInputAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC2FB0, bool, get_IsPerforming, (app::LockPlayerInputAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC3080, app::IEnumerator*, PerformActionCoroutine, (app::LockPlayerInputAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Duration, (app::LockPlayerInputAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Duration, (app::LockPlayerInputAction * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0043BB90, void, ctor, (app::LockPlayerInputAction * this_ptr))
} // namespace app::classes::LockPlayerInputAction
