#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::ScopeWithType {
    IL2CPP_REGISTER_METHOD(0x01F9E6B0, void, ctor, (app::ScopeWithType * this_ptr, app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ * variables, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * expressions, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Type *, get_Type, (app::ScopeWithType * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBF8A0, app::BlockExpression *, Rewrite, (app::ScopeWithType * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables, app::Expression__Array * args))
}
