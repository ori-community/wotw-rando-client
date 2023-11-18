#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FireStick_DeactivateWithDelay_d_81.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::FireStick__DeactivateWithDelay_d__81 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::FireStick_DeactivateWithDelay_d_81 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::FireStick_DeactivateWithDelay_d_81 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125B7F0, bool, MoveNext, (app::FireStick_DeactivateWithDelay_d_81 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::FireStick_DeactivateWithDelay_d_81 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125B9A0, void, IEnumerator_Reset, (app::FireStick_DeactivateWithDelay_d_81 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::FireStick_DeactivateWithDelay_d_81 * this_ptr))
} // namespace app::classes::FireStick__DeactivateWithDelay_d__81
