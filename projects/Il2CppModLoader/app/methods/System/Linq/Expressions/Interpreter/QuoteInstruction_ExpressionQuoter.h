#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter {
    IL2CPP_REGISTER_METHOD(0x0240D6C0, void, ctor, (app::QuoteInstruction_ExpressionQuoter * this_ptr, app::Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_* hoisted_variables, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x0240D850, app::Expression*, VisitBlock, (app::QuoteInstruction_ExpressionQuoter * this_ptr, app::BlockExpression* node))
    IL2CPP_REGISTER_METHOD(0x0240DB40, app::CatchBlock*, VisitCatchBlock, (app::QuoteInstruction_ExpressionQuoter * this_ptr, app::CatchBlock* node))
    IL2CPP_REGISTER_METHOD(0x0240DDE0, app::Expression*, VisitRuntimeVariables, (app::QuoteInstruction_ExpressionQuoter * this_ptr, app::RuntimeVariablesExpression* node))
    IL2CPP_REGISTER_METHOD(0x0240E7A0, app::IRuntimeVariables*, MergeRuntimeVariables, (app::IRuntimeVariables * first, app::IRuntimeVariables* second, app::Int32__Array* indexes))
    IL2CPP_REGISTER_METHODINFO(0x04786DC0, QuoteInstruction_ExpressionQuoter_MergeRuntimeVariables__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0240E900, app::Expression*, VisitParameter, (app::QuoteInstruction_ExpressionQuoter * this_ptr, app::ParameterExpression* node))
    IL2CPP_REGISTER_METHOD(0x0240EA10, app::IStrongBox*, GetBox, (app::QuoteInstruction_ExpressionQuoter * this_ptr, app::ParameterExpression* variable))
    IL2CPP_REGISTER_METHOD(0x0153C290, app::Expression*, VisitLambda, (app::QuoteInstruction_ExpressionQuoter * this_ptr, app::Expression_1_System_Object_* node))
} // namespace app::classes::System::Linq::Expressions::Interpreter::QuoteInstruction_ExpressionQuoter
