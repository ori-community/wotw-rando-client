#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameController_StartBuildInScene_d_178.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::GameController__StartBuildInScene_d__178 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::GameController_StartBuildInScene_d_178 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::GameController_StartBuildInScene_d_178 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069BB00, bool, MoveNext, (app::GameController_StartBuildInScene_d_178 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::GameController_StartBuildInScene_d_178 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069C440, void, IEnumerator_Reset, (app::GameController_StartBuildInScene_d_178 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::GameController_StartBuildInScene_d_178 * this_ptr))
} // namespace app::classes::GameController__StartBuildInScene_d__178
