#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/ExpressionVisitor.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_SwitchCase_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_.h>
#include <Modloader/app/structs/SwitchExpression.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::SwitchExpression {
    IL2CPP_REGISTER_METHOD(
        0x02FC4FE0,
        void,
        ctor,
        app::SwitchExpression* this_ptr,
        app::Type* type,
        app::Expression* switch_value,
        app::Expression* default_body,
        app::MethodInfo_1* comparison,
        app::ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_* cases
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_Type, app::SwitchExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E40920, app::ExpressionType__Enum, get_NodeType, app::SwitchExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Expression*, get_SwitchValue, app::SwitchExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_*, get_Cases, app::SwitchExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Expression*, get_DefaultBody, app::SwitchExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::MethodInfo_1*, get_Comparison, app::SwitchExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FC50B0, app::Expression*, Accept, app::SwitchExpression* this_ptr, app::ExpressionVisitor* visitor)
    IL2CPP_REGISTER_METHOD(
        0x02FC50E0,
        app::SwitchExpression*,
        Update,
        app::SwitchExpression* this_ptr,
        app::Expression* switch_value,
        app::IEnumerable_1_System_Linq_Expressions_SwitchCase_* cases,
        app::Expression* default_body
    )
} // namespace app::classes::System::Linq::Expressions::SwitchExpression
