#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlockExpressionList_GetEnumerator_d_18.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Expressions::BlockExpressionList__GetEnumerator_d__18 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::BlockExpressionList_GetEnumerator_d_18* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::BlockExpressionList_GetEnumerator_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F9FD30, bool, MoveNext, app::BlockExpressionList_GetEnumerator_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Expression*, IEnumerator_Expression__get_Current, app::BlockExpressionList_GetEnumerator_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F9FE30, void, IEnumerator_Reset, app::BlockExpressionList_GetEnumerator_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::BlockExpressionList_GetEnumerator_d_18* this_ptr)
} // namespace app::classes::System::Linq::Expressions::BlockExpressionList__GetEnumerator_d__18
