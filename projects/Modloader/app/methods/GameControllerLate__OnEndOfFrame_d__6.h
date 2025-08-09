#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameControllerLate_OnEndOfFrame_d_6.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::GameControllerLate__OnEndOfFrame_d__6 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::GameControllerLate_OnEndOfFrame_d_6* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::GameControllerLate_OnEndOfFrame_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069D2A0, bool, MoveNext, app::GameControllerLate_OnEndOfFrame_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::GameControllerLate_OnEndOfFrame_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069D450, void, IEnumerator_Reset, app::GameControllerLate_OnEndOfFrame_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::GameControllerLate_OnEndOfFrame_d_6* this_ptr)
} // namespace app::classes::GameControllerLate__OnEndOfFrame_d__6
