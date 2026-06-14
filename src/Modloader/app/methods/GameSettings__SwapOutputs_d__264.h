#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameSettings_SwapOutputs_d_264.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::GameSettings__SwapOutputs_d__264 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::GameSettings_SwapOutputs_d_264* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::GameSettings_SwapOutputs_d_264* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00403E40, bool, MoveNext, app::GameSettings_SwapOutputs_d_264* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::GameSettings_SwapOutputs_d_264* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00403EE0, void, IEnumerator_Reset, app::GameSettings_SwapOutputs_d_264* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::GameSettings_SwapOutputs_d_264* this_ptr)
} // namespace app::classes::GameSettings__SwapOutputs_d__264
