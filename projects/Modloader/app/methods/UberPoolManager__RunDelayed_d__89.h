#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberPoolManager_RunDelayed_d_89.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UberPoolManager__RunDelayed_d__89 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::UberPoolManager_RunDelayed_d_89 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::UberPoolManager_RunDelayed_d_89 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FDF6B0, bool, MoveNext, (app::UberPoolManager_RunDelayed_d_89 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::UberPoolManager_RunDelayed_d_89 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FDF850, void, IEnumerator_Reset, (app::UberPoolManager_RunDelayed_d_89 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::UberPoolManager_RunDelayed_d_89 * this_ptr))
} // namespace app::classes::UberPoolManager__RunDelayed_d__89
