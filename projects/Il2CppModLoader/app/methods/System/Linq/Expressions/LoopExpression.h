#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::LoopExpression {
    IL2CPP_REGISTER_METHOD(0x02417930, void, ctor, (app::LoopExpression * this_ptr, app::Expression* body, app::LabelTarget* break_1, app::LabelTarget* continue_1))
    IL2CPP_REGISTER_METHOD(0x024179F0, app::Type*, get_Type, (app::LoopExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F290, app::ExpressionType__Enum, get_NodeType, (app::LoopExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Expression*, get_Body, (app::LoopExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::LabelTarget*, get_BreakLabel, (app::LoopExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::LabelTarget*, get_ContinueLabel, (app::LoopExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02417AB0, app::Expression*, Accept, (app::LoopExpression * this_ptr, app::ExpressionVisitor* visitor))
    IL2CPP_REGISTER_METHOD(0x02417AE0, app::LoopExpression*, Update, (app::LoopExpression * this_ptr, app::LabelTarget* break_label, app::LabelTarget* continue_label, app::Expression* body))
} // namespace app::classes::System::Linq::Expressions::LoopExpression
