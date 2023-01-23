#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExpressionStringBuilder.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/LabelTarget.h>
#include <Modloader/app/structs/ParameterExpression.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/CatchBlock.h>
#include <Modloader/app/structs/SwitchCase.h>
#include <Modloader/app/structs/MemberBinding.h>
#include <Modloader/app/structs/ElementInit.h>
#include <Modloader/app/structs/BinaryExpression.h>
#include <Modloader/app/structs/ListInitExpression.h>
#include <Modloader/app/structs/ConditionalExpression.h>
#include <Modloader/app/structs/ConstantExpression.h>
#include <Modloader/app/structs/DebugInfoExpression.h>
#include <Modloader/app/structs/RuntimeVariablesExpression.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MemberExpression.h>
#include <Modloader/app/structs/MemberInitExpression.h>
#include <Modloader/app/structs/MemberAssignment.h>
#include <Modloader/app/structs/MemberListBinding.h>
#include <Modloader/app/structs/MemberMemberBinding.h>
#include <Modloader/app/structs/InvocationExpression.h>
#include <Modloader/app/structs/MethodCallExpression.h>
#include <Modloader/app/structs/NewArrayExpression.h>
#include <Modloader/app/structs/NewExpression.h>
#include <Modloader/app/structs/TypeBinaryExpression.h>
#include <Modloader/app/structs/UnaryExpression.h>
#include <Modloader/app/structs/BlockExpression.h>
#include <Modloader/app/structs/DefaultExpression.h>
#include <Modloader/app/structs/LabelExpression.h>
#include <Modloader/app/structs/GotoExpression.h>
#include <Modloader/app/structs/LoopExpression.h>
#include <Modloader/app/structs/SwitchExpression.h>
#include <Modloader/app/structs/TryExpression.h>
#include <Modloader/app/structs/IndexExpression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Object_.h>
#include <Modloader/app/structs/Expression_1_System_Object_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>

namespace app::classes::System::Linq::Expressions::ExpressionStringBuilder {
    IL2CPP_REGISTER_METHOD(0x022C78D0, void, ctor, (app::ExpressionStringBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B65290, app::String*, ToString, (app::ExpressionStringBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7A20, int32_t, GetLabelId, (app::ExpressionStringBuilder * this_ptr, app::LabelTarget* label))
    IL2CPP_REGISTER_METHOD(0x022C7A20, int32_t, GetParamId, (app::ExpressionStringBuilder * this_ptr, app::ParameterExpression* p))
    IL2CPP_REGISTER_METHOD(0x022C7A30, int32_t, GetId, (app::ExpressionStringBuilder * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x022C7C70, void, Out_1, (app::ExpressionStringBuilder * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x022C7C90, void, Out_2, (app::ExpressionStringBuilder * this_ptr, uint16_t c))
    IL2CPP_REGISTER_METHOD(0x022C7CB0, app::String*, ExpressionToString, (app::Expression * node))
    IL2CPP_REGISTER_METHOD(0x022C7E30, app::String*, CatchBlockToString, (app::CatchBlock * node))
    IL2CPP_REGISTER_METHOD(0x022C7FB0, app::String*, SwitchCaseToString, (app::SwitchCase * node))
    IL2CPP_REGISTER_METHOD(0x022C8130, app::String*, MemberBindingToString, (app::MemberBinding * node))
    IL2CPP_REGISTER_METHOD(0x022C82B0, app::String*, ElementInitBindingToString, (app::ElementInit * node))
    IL2CPP_REGISTER_METHOD(0x022C8430, app::Expression*, VisitBinary, (app::ExpressionStringBuilder * this_ptr, app::BinaryExpression* node))
    IL2CPP_REGISTER_METHODINFO(0x0470AD38, ExpressionStringBuilder_VisitBinary__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022C8900, app::Expression*, VisitParameter, (app::ExpressionStringBuilder * this_ptr, app::ParameterExpression* node))
    IL2CPP_REGISTER_METHOD(0x022C8A40, app::Expression*, VisitListInit, (app::ExpressionStringBuilder * this_ptr, app::ListInitExpression* node))
    IL2CPP_REGISTER_METHOD(0x022C8D30, app::Expression*, VisitConditional, (app::ExpressionStringBuilder * this_ptr, app::ConditionalExpression* node))
    IL2CPP_REGISTER_METHOD(0x022C8EA0, app::Expression*, VisitConstant, (app::ExpressionStringBuilder * this_ptr, app::ConstantExpression* node))
    IL2CPP_REGISTER_METHOD(0x022C90E0, app::Expression*, VisitDebugInfo, (app::ExpressionStringBuilder * this_ptr, app::DebugInfoExpression* node))
    IL2CPP_REGISTER_METHOD(0x022C9460, app::Expression*, VisitRuntimeVariables, (app::ExpressionStringBuilder * this_ptr, app::RuntimeVariablesExpression* node))
    IL2CPP_REGISTER_METHOD(0x022C9510, void, OutMember, (app::ExpressionStringBuilder * this_ptr, app::Expression* instance, app::MemberInfo_1* member))
    IL2CPP_REGISTER_METHOD(0x022C9600, app::Expression*, VisitMember, (app::ExpressionStringBuilder * this_ptr, app::MemberExpression* node))
    IL2CPP_REGISTER_METHOD(0x022C9730, app::Expression*, VisitMemberInit, (app::ExpressionStringBuilder * this_ptr, app::MemberInitExpression* node))
    IL2CPP_REGISTER_METHOD(0x022C9B30, app::MemberAssignment*, VisitMemberAssignment, (app::ExpressionStringBuilder * this_ptr, app::MemberAssignment* assignment))
    IL2CPP_REGISTER_METHOD(0x022C9C30, app::MemberListBinding*, VisitMemberListBinding, (app::ExpressionStringBuilder * this_ptr, app::MemberListBinding* binding))
    IL2CPP_REGISTER_METHOD(0x022C9F50, app::MemberMemberBinding*, VisitMemberMemberBinding, (app::ExpressionStringBuilder * this_ptr, app::MemberMemberBinding* binding))
    IL2CPP_REGISTER_METHOD(0x022CA270, app::ElementInit*, VisitElementInit, (app::ExpressionStringBuilder * this_ptr, app::ElementInit* initializer))
    IL2CPP_REGISTER_METHOD(0x022CA5D0, app::Expression*, VisitInvocation, (app::ExpressionStringBuilder * this_ptr, app::InvocationExpression* node))
    IL2CPP_REGISTER_METHOD(0x022CA870, app::Expression*, VisitMethodCall, (app::ExpressionStringBuilder * this_ptr, app::MethodCallExpression* node))
    IL2CPP_REGISTER_METHOD(0x022CABF0, app::Expression*, VisitNewArray, (app::ExpressionStringBuilder * this_ptr, app::NewArrayExpression* node))
    IL2CPP_REGISTER_METHOD(0x022CAD60, app::Expression*, VisitNew, (app::ExpressionStringBuilder * this_ptr, app::NewExpression* node))
    IL2CPP_REGISTER_METHOD(0x022CB0C0, app::Expression*, VisitTypeBinary, (app::ExpressionStringBuilder * this_ptr, app::TypeBinaryExpression* node))
    IL2CPP_REGISTER_METHOD(0x022CB240, app::Expression*, VisitUnary, (app::ExpressionStringBuilder * this_ptr, app::UnaryExpression* node))
    IL2CPP_REGISTER_METHODINFO(0x04790480, ExpressionStringBuilder_VisitUnary__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022CB7E0, app::Expression*, VisitBlock, (app::ExpressionStringBuilder * this_ptr, app::BlockExpression* node))
    IL2CPP_REGISTER_METHOD(0x022CBBF0, app::Expression*, VisitDefault, (app::ExpressionStringBuilder * this_ptr, app::DefaultExpression* node))
    IL2CPP_REGISTER_METHOD(0x022CBD10, app::Expression*, VisitLabel, (app::ExpressionStringBuilder * this_ptr, app::LabelExpression* node))
    IL2CPP_REGISTER_METHOD(0x022CBDF0, app::Expression*, VisitGoto, (app::ExpressionStringBuilder * this_ptr, app::GotoExpression* node))
    IL2CPP_REGISTER_METHODINFO(0x0478BE60, ExpressionStringBuilder_VisitGoto__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022CBF90, app::Expression*, VisitLoop, (app::ExpressionStringBuilder * this_ptr, app::LoopExpression* node))
    IL2CPP_REGISTER_METHOD(0x022CC030, app::SwitchCase*, VisitSwitchCase, (app::ExpressionStringBuilder * this_ptr, app::SwitchCase* node))
    IL2CPP_REGISTER_METHOD(0x022CC120, app::Expression*, VisitSwitch, (app::ExpressionStringBuilder * this_ptr, app::SwitchExpression* node))
    IL2CPP_REGISTER_METHOD(0x022CC220, app::CatchBlock*, VisitCatchBlock, (app::ExpressionStringBuilder * this_ptr, app::CatchBlock* node))
    IL2CPP_REGISTER_METHOD(0x022CC390, app::Expression*, VisitTry, (app::ExpressionStringBuilder * this_ptr, app::TryExpression* node))
    IL2CPP_REGISTER_METHOD(0x022CC430, app::Expression*, VisitIndex, (app::ExpressionStringBuilder * this_ptr, app::IndexExpression* node))
    IL2CPP_REGISTER_METHOD(0x022CC7A0, app::Expression*, VisitExtension, (app::ExpressionStringBuilder * this_ptr, app::Expression* node))
    IL2CPP_REGISTER_METHOD(0x022CCA10, void, DumpLabel, (app::ExpressionStringBuilder * this_ptr, app::LabelTarget* target))
    IL2CPP_REGISTER_METHOD(0x022CCB20, bool, IsBool, (app::Expression * node))
    IL2CPP_REGISTER_METHOD(0x01AEFBA0, void, VisitExpressions_1, (app::ExpressionStringBuilder * this_ptr, uint16_t open, app::ReadOnlyCollection_1_System_Object_* expressions, uint16_t close))
    IL2CPP_REGISTER_METHOD(0x01AEFC70, void, VisitExpressions_2, (app::ExpressionStringBuilder * this_ptr, uint16_t open, app::ReadOnlyCollection_1_System_Object_* expressions, uint16_t close, app::String* seperator))
    IL2CPP_REGISTER_METHOD(0x0153BC30, app::Expression*, VisitLambda, (app::ExpressionStringBuilder * this_ptr, app::Expression_1_System_Object_* node))
    IL2CPP_REGISTER_METHOD(0x01AEFBA0, void, VisitExpressions_3, (app::ExpressionStringBuilder * this_ptr, uint16_t open, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* expressions, uint16_t close))
    IL2CPP_REGISTER_METHODINFO(0x04762670, ExpressionStringBuilder_VisitExpressions_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01AEFBA0, void, VisitExpressions_4, (app::ExpressionStringBuilder * this_ptr, uint16_t open, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_* expressions, uint16_t close))
    IL2CPP_REGISTER_METHODINFO(0x047017F8, ExpressionStringBuilder_VisitExpressions_3__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::ExpressionStringBuilder
