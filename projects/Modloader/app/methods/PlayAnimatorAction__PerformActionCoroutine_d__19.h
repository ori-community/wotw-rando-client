#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayAnimatorAction_PerformActionCoroutine_d_19.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::PlayAnimatorAction__PerformActionCoroutine_d__19 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::PlayAnimatorAction_PerformActionCoroutine_d_19 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::PlayAnimatorAction_PerformActionCoroutine_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01176360, bool, MoveNext, (app::PlayAnimatorAction_PerformActionCoroutine_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::PlayAnimatorAction_PerformActionCoroutine_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01176A80, void, IEnumerator_Reset, (app::PlayAnimatorAction_PerformActionCoroutine_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::PlayAnimatorAction_PerformActionCoroutine_d_19 * this_ptr))
} // namespace app::classes::PlayAnimatorAction__PerformActionCoroutine_d__19
