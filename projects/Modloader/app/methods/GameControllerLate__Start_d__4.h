#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameControllerLate_Start_d_4.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::GameControllerLate__Start_d__4 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::GameControllerLate_Start_d_4 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::GameControllerLate_Start_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069D4A0, bool, MoveNext, (app::GameControllerLate_Start_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::GameControllerLate_Start_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069D780, void, IEnumerator_Reset, (app::GameControllerLate_Start_d_4 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477CA50, GameControllerLate_Start_d_4_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::GameControllerLate_Start_d_4 * this_ptr))
} // namespace app::classes::GameControllerLate__Start_d__4
