#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GoldenSein_UndrainRoutine_d_60.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::GoldenSein__UndrainRoutine_d__60 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::GoldenSein_UndrainRoutine_d_60* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::GoldenSein_UndrainRoutine_d_60* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010787A0, bool, MoveNext, app::GoldenSein_UndrainRoutine_d_60* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::GoldenSein_UndrainRoutine_d_60* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01078A20, void, IEnumerator_Reset, app::GoldenSein_UndrainRoutine_d_60* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::GoldenSein_UndrainRoutine_d_60* this_ptr)
} // namespace app::classes::GoldenSein__UndrainRoutine_d__60
