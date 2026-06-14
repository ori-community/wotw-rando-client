#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/Action_1_System_Linq_Expressions_ElementInit_.h>
#include <Modloader/app/structs/Action_1_System_Linq_Expressions_MemberBinding_.h>
#include <Modloader/app/structs/Action_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/BinaryExpression.h>
#include <Modloader/app/structs/BlockExpression.h>
#include <Modloader/app/structs/CatchBlock.h>
#include <Modloader/app/structs/ConditionalExpression.h>
#include <Modloader/app/structs/ConstantExpression.h>
#include <Modloader/app/structs/DebugInfoExpression.h>
#include <Modloader/app/structs/DebugViewWriter.h>
#include <Modloader/app/structs/DebugViewWriter_Flow__Enum.h>
#include <Modloader/app/structs/DefaultExpression.h>
#include <Modloader/app/structs/Dictionary_2_System_Linq_Expressions_LabelTarget_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_Linq_Expressions_LambdaExpression_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/ElementInit.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Expression_1_System_Object_.h>
#include <Modloader/app/structs/GotoExpression.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_ElementInit_.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_MemberBinding_.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Object_.h>
#include <Modloader/app/structs/IndexExpression.h>
#include <Modloader/app/structs/InvocationExpression.h>
#include <Modloader/app/structs/LabelExpression.h>
#include <Modloader/app/structs/LabelTarget.h>
#include <Modloader/app/structs/LambdaExpression.h>
#include <Modloader/app/structs/ListInitExpression.h>
#include <Modloader/app/structs/LoopExpression.h>
#include <Modloader/app/structs/MemberAssignment.h>
#include <Modloader/app/structs/MemberBinding.h>
#include <Modloader/app/structs/MemberExpression.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MemberInitExpression.h>
#include <Modloader/app/structs/MemberListBinding.h>
#include <Modloader/app/structs/MemberMemberBinding.h>
#include <Modloader/app/structs/MethodCallExpression.h>
#include <Modloader/app/structs/NewArrayExpression.h>
#include <Modloader/app/structs/NewExpression.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParameterExpression.h>
#include <Modloader/app/structs/RuntimeVariablesExpression.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SwitchCase.h>
#include <Modloader/app/structs/SwitchExpression.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/TryExpression.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeBinaryExpression.h>
#include <Modloader/app/structs/UnaryExpression.h>

namespace app::classes::System::Linq::Expressions::DebugViewWriter {
    IL2CPP_REGISTER_METHOD(0x01FA3B10, void, ctor, app::DebugViewWriter* this_ptr, app::TextWriter* file)
    IL2CPP_REGISTER_METHOD(0x01FA3C90, int32_t, get_Base, app::DebugViewWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Delta, app::DebugViewWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FA3D60, int32_t, get_Depth, app::DebugViewWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FA3E30, void, Indent, app::DebugViewWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FA3E40, void, Dedent, app::DebugViewWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FA3E50, void, NewLine, app::DebugViewWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FA3E60, int32_t, GetLambdaId, app::DebugViewWriter* this_ptr, app::LambdaExpression* le)
    IL2CPP_REGISTER_METHOD(0x01FA3F00, int32_t, GetParamId, app::DebugViewWriter* this_ptr, app::ParameterExpression* p)
    IL2CPP_REGISTER_METHOD(0x01FA3FA0, int32_t, GetLabelTargetId, app::DebugViewWriter* this_ptr, app::LabelTarget* target)
    IL2CPP_REGISTER_METHOD(0x01FA4040, void, WriteTo_1, app::Expression* node, app::TextWriter* writer)
    IL2CPP_REGISTER_METHOD(0x01FA42E0, void, WriteTo_2, app::DebugViewWriter* this_ptr, app::Expression* node)
    IL2CPP_REGISTER_METHOD(0x01FA4450, void, Out_1, app::DebugViewWriter* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01FA4470, void, Out_2, app::DebugViewWriter* this_ptr, app::DebugViewWriter_Flow__Enum before, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01FA4490, void, Out_3, app::DebugViewWriter* this_ptr, app::String* s, app::DebugViewWriter_Flow__Enum after)
    IL2CPP_REGISTER_METHOD(
        0x01FA44B0,
        void,
        Out_4,
        app::DebugViewWriter* this_ptr,
        app::DebugViewWriter_Flow__Enum before,
        app::String* s,
        app::DebugViewWriter_Flow__Enum after
    )
    IL2CPP_REGISTER_METHOD(0x01FA4730, void, WriteLine, app::DebugViewWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FA4770, void, Write, app::DebugViewWriter* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01FA47C0, app::DebugViewWriter_Flow__Enum, GetFlow, app::DebugViewWriter* this_ptr, app::DebugViewWriter_Flow__Enum flow)
    IL2CPP_REGISTER_METHOD(0x01FA48C0, app::DebugViewWriter_Flow__Enum, CheckBreak, app::DebugViewWriter* this_ptr, app::DebugViewWriter_Flow__Enum flow)
    IL2CPP_REGISTER_METHOD(
        0x01FA4900,
        void,
        VisitDeclarations,
        app::DebugViewWriter* this_ptr,
        app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_* expressions
    )
    IL2CPP_REGISTER_METHOD(0x01FA4A80, app::Expression*, VisitBinary, app::DebugViewWriter* this_ptr, app::BinaryExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA4FA0, app::Expression*, VisitParameter, app::DebugViewWriter* this_ptr, app::ParameterExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA5110, bool, IsSimpleExpression, app::Expression* node)
    IL2CPP_REGISTER_METHOD(0x01FA5270, app::Expression*, VisitConditional, app::DebugViewWriter* this_ptr, app::ConditionalExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA5550, app::Expression*, VisitConstant, app::DebugViewWriter* this_ptr, app::ConstantExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA5970, app::String*, GetConstantValueSuffix, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01FA5BC0, app::Expression*, VisitRuntimeVariables, app::DebugViewWriter* this_ptr, app::RuntimeVariablesExpression* node)
    IL2CPP_REGISTER_METHOD(
        0x01FA5CA0,
        void,
        OutMember,
        app::DebugViewWriter* this_ptr,
        app::Expression* node,
        app::Expression* instance,
        app::MemberInfo_1* member
    )
    IL2CPP_REGISTER_METHOD(0x01FA5E10, app::Expression*, VisitMember, app::DebugViewWriter* this_ptr, app::MemberExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA5E80, app::Expression*, VisitInvocation, app::DebugViewWriter* this_ptr, app::InvocationExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA5F80, bool, NeedsParentheses, app::Expression* parent, app::Expression* child)
    IL2CPP_REGISTER_METHOD(0x01FA6160, int32_t, GetOperatorPrecedence, app::Expression* node)
    IL2CPP_REGISTER_METHOD(0x01FA62E0, void, ParenthesizedVisit, app::DebugViewWriter* this_ptr, app::Expression* parent, app::Expression* node_to_visit)
    IL2CPP_REGISTER_METHOD(0x01FA63E0, app::Expression*, VisitMethodCall, app::DebugViewWriter* this_ptr, app::MethodCallExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA6630, app::Expression*, VisitNewArray, app::DebugViewWriter* this_ptr, app::NewArrayExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA6800, app::Expression*, VisitNew, app::DebugViewWriter* this_ptr, app::NewExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA6930, app::ElementInit*, VisitElementInit, app::DebugViewWriter* this_ptr, app::ElementInit* node)
    IL2CPP_REGISTER_METHOD(0x01FA6AE0, app::Expression*, VisitListInit, app::DebugViewWriter* this_ptr, app::ListInitExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA6C90, app::MemberAssignment*, VisitMemberAssignment, app::DebugViewWriter* this_ptr, app::MemberAssignment* assignment)
    IL2CPP_REGISTER_METHOD(0x01FA6D90, app::MemberListBinding*, VisitMemberListBinding, app::DebugViewWriter* this_ptr, app::MemberListBinding* binding)
    IL2CPP_REGISTER_METHOD(0x01FA6F80, app::MemberMemberBinding*, VisitMemberMemberBinding, app::DebugViewWriter* this_ptr, app::MemberMemberBinding* binding)
    IL2CPP_REGISTER_METHOD(0x01FA7170, app::Expression*, VisitMemberInit, app::DebugViewWriter* this_ptr, app::MemberInitExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA7320, app::Expression*, VisitTypeBinary, app::DebugViewWriter* this_ptr, app::TypeBinaryExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA7440, app::Expression*, VisitUnary, app::DebugViewWriter* this_ptr, app::UnaryExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA7870, app::Expression*, VisitBlock, app::DebugViewWriter* this_ptr, app::BlockExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA7C10, app::Expression*, VisitDefault, app::DebugViewWriter* this_ptr, app::DefaultExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA7D10, app::Expression*, VisitLabel, app::DebugViewWriter* this_ptr, app::LabelExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA7E00, app::Expression*, VisitGoto, app::DebugViewWriter* this_ptr, app::GotoExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA7F70, app::Expression*, VisitLoop, app::DebugViewWriter* this_ptr, app::LoopExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA80C0, app::SwitchCase*, VisitSwitchCase, app::DebugViewWriter* this_ptr, app::SwitchCase* node)
    IL2CPP_REGISTER_METHOD(0x01FA8370, app::Expression*, VisitSwitch, app::DebugViewWriter* this_ptr, app::SwitchExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA85D0, app::CatchBlock*, VisitCatchBlock, app::DebugViewWriter* this_ptr, app::CatchBlock* node)
    IL2CPP_REGISTER_METHOD(0x01FA8760, app::Expression*, VisitTry, app::DebugViewWriter* this_ptr, app::TryExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA89C0, app::Expression*, VisitIndex, app::DebugViewWriter* this_ptr, app::IndexExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA8AC0, app::Expression*, VisitExtension, app::DebugViewWriter* this_ptr, app::Expression* node)
    IL2CPP_REGISTER_METHOD(0x01FA8CD0, app::Expression*, VisitDebugInfo, app::DebugViewWriter* this_ptr, app::DebugInfoExpression* node)
    IL2CPP_REGISTER_METHOD(0x01FA9070, void, DumpLabel, app::DebugViewWriter* this_ptr, app::LabelTarget* target)
    IL2CPP_REGISTER_METHOD(0x01FA91C0, app::String*, GetLabelTargetName, app::DebugViewWriter* this_ptr, app::LabelTarget* target)
    IL2CPP_REGISTER_METHOD(0x01FA9310, void, WriteLambda, app::DebugViewWriter* this_ptr, app::LambdaExpression* lambda)
    IL2CPP_REGISTER_METHOD(0x01FA9530, app::String*, GetLambdaName, app::DebugViewWriter* this_ptr, app::LambdaExpression* lambda)
    IL2CPP_REGISTER_METHOD(0x01FA96A0, bool, ContainsWhiteSpace, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01FA9790, app::String*, QuoteName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01FA98A0, app::String*, GetDisplayName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01FA9A70, void, _VisitDeclarations_b__38_0, app::DebugViewWriter* this_ptr, app::ParameterExpression* variable)
    IL2CPP_REGISTER_METHOD(0x017F0970, void, _VisitListInit_b__58_0, app::DebugViewWriter* this_ptr, app::ElementInit* e)
    IL2CPP_REGISTER_METHOD(0x017F0970, void, _VisitMemberListBinding_b__60_0, app::DebugViewWriter* this_ptr, app::ElementInit* e)
    IL2CPP_REGISTER_METHOD(0x01FA9BB0, void, _VisitMemberMemberBinding_b__61_0, app::DebugViewWriter* this_ptr, app::MemberBinding* e)
    IL2CPP_REGISTER_METHOD(0x01FA9BB0, void, _VisitMemberInit_b__62_0, app::DebugViewWriter* this_ptr, app::MemberBinding* e)
    IL2CPP_REGISTER_METHOD(0x0209E930, int32_t, GetId_1, app::Object* e, app::Dictionary_2_System_Object_System_Int32_** ids)
    IL2CPP_REGISTER_METHOD(
        0x01AEFB70,
        void,
        VisitExpressions_1,
        app::DebugViewWriter* this_ptr,
        char16_t open,
        app::IReadOnlyList_1_System_Object_* expressions
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEF570,
        void,
        VisitExpressions_2,
        app::DebugViewWriter* this_ptr,
        char16_t open,
        char16_t separator,
        app::IReadOnlyList_1_System_Object_* expressions
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEF6D0,
        void,
        VisitExpressions_3,
        app::DebugViewWriter* this_ptr,
        char16_t open,
        char16_t separator,
        app::IReadOnlyList_1_System_Object_* expressions,
        app::Action_1_Object_* visit
    )
    IL2CPP_REGISTER_METHOD(0x0153B940, app::Expression*, VisitLambda, app::DebugViewWriter* this_ptr, app::Expression_1_System_Object_* node)
    IL2CPP_REGISTER_METHOD(0x01AEF540, void, _VisitExpressions_b__37_0, app::DebugViewWriter* this_ptr, app::Object* e)
    IL2CPP_REGISTER_METHOD(
        0x0209E930,
        int32_t,
        GetId_2,
        app::LambdaExpression* e,
        app::Dictionary_2_System_Linq_Expressions_LambdaExpression_System_Int32_** ids
    )
    IL2CPP_REGISTER_METHOD(
        0x0209E930,
        int32_t,
        GetId_3,
        app::ParameterExpression* e,
        app::Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Int32_** ids
    )
    IL2CPP_REGISTER_METHOD(0x0209E930, int32_t, GetId_4, app::LabelTarget* e, app::Dictionary_2_System_Linq_Expressions_LabelTarget_System_Int32_** ids)
    IL2CPP_REGISTER_METHOD(
        0x01AEF6D0,
        void,
        VisitExpressions_4,
        app::DebugViewWriter* this_ptr,
        char16_t open,
        char16_t separator,
        app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_* expressions,
        app::Action_1_System_Linq_Expressions_ParameterExpression_* visit
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEFB70,
        void,
        VisitExpressions_5,
        app::DebugViewWriter* this_ptr,
        char16_t open,
        app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_* expressions
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEFB70,
        void,
        VisitExpressions_6,
        app::DebugViewWriter* this_ptr,
        char16_t open,
        app::IReadOnlyList_1_System_Linq_Expressions_Expression_* expressions
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEF6D0,
        void,
        VisitExpressions_7,
        app::DebugViewWriter* this_ptr,
        char16_t open,
        char16_t separator,
        app::IReadOnlyList_1_System_Linq_Expressions_ElementInit_* expressions,
        app::Action_1_System_Linq_Expressions_ElementInit_* visit
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEF6D0,
        void,
        VisitExpressions_8,
        app::DebugViewWriter* this_ptr,
        char16_t open,
        char16_t separator,
        app::IReadOnlyList_1_System_Linq_Expressions_MemberBinding_* expressions,
        app::Action_1_System_Linq_Expressions_MemberBinding_* visit
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEF570,
        void,
        VisitExpressions_9,
        app::DebugViewWriter* this_ptr,
        char16_t open,
        char16_t separator,
        app::IReadOnlyList_1_System_Linq_Expressions_Expression_* expressions
    )
} // namespace app::classes::System::Linq::Expressions::DebugViewWriter
