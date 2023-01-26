#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeashMarkEffect_DelayedDestroyInactive_d_18.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::LeashMarkEffect__DelayedDestroyInactive_d__18 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::LeashMarkEffect_DelayedDestroyInactive_d_18 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::LeashMarkEffect_DelayedDestroyInactive_d_18 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C7AC0, bool, MoveNext, (app::LeashMarkEffect_DelayedDestroyInactive_d_18 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::LeashMarkEffect_DelayedDestroyInactive_d_18 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C7C80, void, IEnumerator_Reset, (app::LeashMarkEffect_DelayedDestroyInactive_d_18 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::LeashMarkEffect_DelayedDestroyInactive_d_18 * this_ptr))
} // namespace app::classes::LeashMarkEffect__DelayedDestroyInactive_d__18
