#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameTimeExtensions_ExecuteAfterAsync_d_1.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::GameTimeExtensions__ExecuteAfterAsync_d__1 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::GameTimeExtensions_ExecuteAfterAsync_d_1* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::GameTimeExtensions_ExecuteAfterAsync_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02553800, bool, MoveNext, app::GameTimeExtensions_ExecuteAfterAsync_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::GameTimeExtensions_ExecuteAfterAsync_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025538C0, void, IEnumerator_Reset, app::GameTimeExtensions_ExecuteAfterAsync_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::GameTimeExtensions_ExecuteAfterAsync_d_1* this_ptr)
} // namespace app::classes::GameTimeExtensions__ExecuteAfterAsync_d__1
