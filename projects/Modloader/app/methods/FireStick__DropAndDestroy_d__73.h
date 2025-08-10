#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FireStick_DropAndDestroy_d_73.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::FireStick__DropAndDestroy_d__73 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::FireStick_DropAndDestroy_d_73* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::FireStick_DropAndDestroy_d_73* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125BBE0, bool, MoveNext, app::FireStick_DropAndDestroy_d_73* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::FireStick_DropAndDestroy_d_73* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125C100, void, IEnumerator_Reset, app::FireStick_DropAndDestroy_d_73* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::FireStick_DropAndDestroy_d_73* this_ptr)
} // namespace app::classes::FireStick__DropAndDestroy_d__73
