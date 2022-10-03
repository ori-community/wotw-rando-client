#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::BlockN {
    IL2CPP_REGISTER_METHOD(0x01F9FE80, void, ctor, (app::BlockN * this_ptr, app::IReadOnlyList_1_System_Linq_Expressions_Expression_* expressions))
    IL2CPP_REGISTER_METHOD(0x01F9FEB0, app::Expression*, GetExpression, (app::BlockN * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F9FF50, int32_t, get_ExpressionCount, (app::BlockN * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9FFE0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeExpressions, (app::BlockN * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FA0060, app::BlockExpression*, Rewrite, (app::BlockN * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* variables, app::Expression__Array* args))
} // namespace app::classes::System::Linq::Expressions::BlockN
