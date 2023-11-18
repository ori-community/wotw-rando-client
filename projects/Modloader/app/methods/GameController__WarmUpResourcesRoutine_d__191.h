#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameController_WarmUpResourcesRoutine_d_191.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::GameController__WarmUpResourcesRoutine_d__191 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::GameController_WarmUpResourcesRoutine_d_191 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::GameController_WarmUpResourcesRoutine_d_191 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069C490, bool, MoveNext, (app::GameController_WarmUpResourcesRoutine_d_191 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::GameController_WarmUpResourcesRoutine_d_191 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069C690, void, IEnumerator_Reset, (app::GameController_WarmUpResourcesRoutine_d_191 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::GameController_WarmUpResourcesRoutine_d_191 * this_ptr))
} // namespace app::classes::GameController__WarmUpResourcesRoutine_d__191
