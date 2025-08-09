#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameController_LoadAssets_d_182.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::GameController__LoadAssets_d__182 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::GameController_LoadAssets_d_182* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x00699B70, void, IDisposable_Dispose, app::GameController_LoadAssets_d_182* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00699BB0, bool, MoveNext, app::GameController_LoadAssets_d_182* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00699E70, void, __m__Finally1, app::GameController_LoadAssets_d_182* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::GameController_LoadAssets_d_182* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00699F00, void, IEnumerator_Reset, app::GameController_LoadAssets_d_182* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::GameController_LoadAssets_d_182* this_ptr)
} // namespace app::classes::GameController__LoadAssets_d__182
