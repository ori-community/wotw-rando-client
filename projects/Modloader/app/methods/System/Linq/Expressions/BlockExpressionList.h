#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlockExpressionList.h>
#include <Modloader/app/structs/BlockExpression.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Expression__Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Linq_Expressions_Expression_.h>

namespace app::classes::System::Linq::Expressions::BlockExpressionList {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::BlockExpressionList * this_ptr, app::BlockExpression* provider, app::Expression* arg0))
    IL2CPP_REGISTER_METHOD(0x01F9F640, int32_t, IndexOf, (app::BlockExpressionList * this_ptr, app::Expression* item))
    IL2CPP_REGISTER_METHOD(0x01F9F6F0, void, Insert, (app::BlockExpressionList * this_ptr, int32_t index, app::Expression* item))
    IL2CPP_REGISTER_METHOD(0x01F9F730, void, RemoveAt, (app::BlockExpressionList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F9F770, app::Expression*, get_Item, (app::BlockExpressionList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F9F7B0, void, set_Item, (app::BlockExpressionList * this_ptr, int32_t index, app::Expression* value))
    IL2CPP_REGISTER_METHOD(0x01F9F7F0, void, Add, (app::BlockExpressionList * this_ptr, app::Expression* item))
    IL2CPP_REGISTER_METHOD(0x01F9F830, void, Clear, (app::BlockExpressionList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9F870, bool, Contains, (app::BlockExpressionList * this_ptr, app::Expression* item))
    IL2CPP_REGISTER_METHOD(0x01F9F920, void, CopyTo, (app::BlockExpressionList * this_ptr, app::Expression__Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x017170C0, int32_t, get_Count, (app::BlockExpressionList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9FB60, bool, get_IsReadOnly, (app::BlockExpressionList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9FBA0, bool, Remove, (app::BlockExpressionList * this_ptr, app::Expression* item))
    IL2CPP_REGISTER_METHOD(0x01F9FBE0, app::IEnumerator_1_System_Linq_Expressions_Expression_*, GetEnumerator, (app::BlockExpressionList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9FBE0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::BlockExpressionList * this_ptr))
} // namespace app::classes::System::Linq::Expressions::BlockExpressionList
