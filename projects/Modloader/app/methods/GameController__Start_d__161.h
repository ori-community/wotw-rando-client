#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameController_Start_d_161.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::GameController__Start_d__161 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::GameController_Start_d_161* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::GameController_Start_d_161* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069AC00, bool, MoveNext, app::GameController_Start_d_161* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::GameController_Start_d_161* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069BAB0, void, IEnumerator_Reset, app::GameController_Start_d_161* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::GameController_Start_d_161* this_ptr)
} // namespace app::classes::GameController__Start_d__161
