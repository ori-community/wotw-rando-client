#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryExpression.h>
#include <Modloader/app/structs/BlockExpression.h>
#include <Modloader/app/structs/ByRefUpdater.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/IArgumentProvider.h>
#include <Modloader/app/structs/IndexExpression.h>
#include <Modloader/app/structs/InstructionList.h>
#include <Modloader/app/structs/Interpreter.h>
#include <Modloader/app/structs/LabelInfo.h>
#include <Modloader/app/structs/LabelScopeKind__Enum.h>
#include <Modloader/app/structs/LabelTarget.h>
#include <Modloader/app/structs/LambdaExpression.h>
#include <Modloader/app/structs/LightCompiler.h>
#include <Modloader/app/structs/LightDelegateCreator.h>
#include <Modloader/app/structs/LocalDefinition__Array.h>
#include <Modloader/app/structs/LocalVariable.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/ParameterExpression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SwitchExpression.h>
#include <Modloader/app/structs/TryExpression.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UnaryExpression.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LightCompiler {
    IL2CPP_REGISTER_METHOD(0x01CEBBD0, void, ctor_1, app::LightCompiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CEC400, void, ctor_2, app::LightCompiler* this_ptr, app::LightCompiler* parent)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::InstructionList*, get_Instructions, app::LightCompiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CEC430, app::LightDelegateCreator*, CompileTop, app::LightCompiler* this_ptr, app::LambdaExpression* node)
    IL2CPP_REGISTER_METHOD(0x01CEC7C0, app::Interpreter*, MakeInterpreter, app::LightCompiler* this_ptr, app::String* lambda_name)
    IL2CPP_REGISTER_METHOD(0x01CECD40, void, CompileConstantExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CECE50, void, CompileDefaultExpression_1, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CECFE0, void, CompileDefaultExpression_2, app::LightCompiler* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CED140, app::LocalVariable*, EnsureAvailableForClosure, app::LightCompiler* this_ptr, app::ParameterExpression* expr)
    IL2CPP_REGISTER_METHOD(0x01CED2B0, app::LocalVariable*, ResolveLocal, app::LightCompiler* this_ptr, app::ParameterExpression* variable)
    IL2CPP_REGISTER_METHOD(0x01CED320, void, CompileGetVariable, app::LightCompiler* this_ptr, app::ParameterExpression* variable)
    IL2CPP_REGISTER_METHOD(0x01CED470, void, EmitCopyValueType, app::LightCompiler* this_ptr, app::Type* value_type)
    IL2CPP_REGISTER_METHOD(0x01CED590, void, LoadLocalNoValueTypeCopy, app::LightCompiler* this_ptr, app::ParameterExpression* variable)
    IL2CPP_REGISTER_METHOD(0x01CED720, bool, MaybeMutableValueType, app::LightCompiler* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01CED790, void, CompileGetBoxedVariable, app::LightCompiler* this_ptr, app::ParameterExpression* variable)
    IL2CPP_REGISTER_METHOD(0x01CED840, void, CompileSetVariable, app::LightCompiler* this_ptr, app::ParameterExpression* variable, bool is_void)
    IL2CPP_REGISTER_METHOD(0x01CEDAB0, void, CompileParameterExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CEDB90, void, CompileBlockExpression, app::LightCompiler* this_ptr, app::Expression* expr, bool as_void)
    IL2CPP_REGISTER_METHOD(0x01CEDE80, app::LocalDefinition__Array*, CompileBlockStart, app::LightCompiler* this_ptr, app::BlockExpression* node)
    IL2CPP_REGISTER_METHOD(0x01CEE3B0, void, CompileBlockEnd, app::LightCompiler* this_ptr, app::LocalDefinition__Array* locals)
    IL2CPP_REGISTER_METHOD(0x01CEE500, void, CompileIndexExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CEE620, void, EmitIndexGet, app::LightCompiler* this_ptr, app::IndexExpression* index)
    IL2CPP_REGISTER_METHOD(0x01CEE780, void, CompileIndexAssignment, app::LightCompiler* this_ptr, app::BinaryExpression* node, bool as_void)
    IL2CPP_REGISTER_METHOD(0x01CEECA0, void, CompileMemberAssignment_1, app::LightCompiler* this_ptr, app::BinaryExpression* node, bool as_void)
    IL2CPP_REGISTER_METHOD(
        0x01CEEDF0,
        void,
        CompileMemberAssignment_2,
        app::LightCompiler* this_ptr,
        bool as_void,
        app::MemberInfo_1* ref_member,
        app::Expression* value,
        bool for_binding
    )
    IL2CPP_REGISTER_METHOD(0x01CEF400, void, CompileVariableAssignment, app::LightCompiler* this_ptr, app::BinaryExpression* node, bool as_void)
    IL2CPP_REGISTER_METHOD(0x01CEF510, void, CompileAssignBinaryExpression, app::LightCompiler* this_ptr, app::Expression* expr, bool as_void)
    IL2CPP_REGISTER_METHOD(0x01CEF870, void, CompileBinaryExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CF0A90, void, CompileEqual, app::LightCompiler* this_ptr, app::Expression* left, app::Expression* right, bool lifted_to_null)
    IL2CPP_REGISTER_METHOD(0x01CF0B30, void, CompileNotEqual, app::LightCompiler* this_ptr, app::Expression* left, app::Expression* right, bool lifted_to_null)
    IL2CPP_REGISTER_METHOD(0x01CF0BD0, void, CompileComparison, app::LightCompiler* this_ptr, app::BinaryExpression* node)
    IL2CPP_REGISTER_METHOD(
        0x01CF0E50,
        void,
        CompileArithmetic,
        app::LightCompiler* this_ptr,
        app::ExpressionType__Enum node_type,
        app::Expression* left,
        app::Expression* right
    )
    IL2CPP_REGISTER_METHOD(0x01CF1180, void, CompileConvertUnaryExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(
        0x01CF1880,
        void,
        CompileConvertToType,
        app::LightCompiler* this_ptr,
        app::Type* type_from,
        app::Type* type_to,
        bool is_checked,
        bool is_lifted_to_null
    )
    IL2CPP_REGISTER_METHOD(0x01CF22D0, void, CompileNotExpression, app::LightCompiler* this_ptr, app::UnaryExpression* node)
    IL2CPP_REGISTER_METHOD(0x01CF2350, void, CompileUnaryExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CF2790, void, EmitUnaryMethodCall, app::LightCompiler* this_ptr, app::UnaryExpression* node)
    IL2CPP_REGISTER_METHOD(0x01CF28F0, void, EmitUnaryBoolCheck, app::LightCompiler* this_ptr, app::UnaryExpression* node)
    IL2CPP_REGISTER_METHOD(0x01CF2BA0, void, CompileAndAlsoBinaryExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CF2C80, void, CompileOrElseBinaryExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CF2D60, void, CompileLogicalBinaryExpression, app::LightCompiler* this_ptr, app::BinaryExpression* b, bool and_also)
    IL2CPP_REGISTER_METHOD(0x01CF2F10, void, CompileMethodLogicalBinaryExpression, app::LightCompiler* this_ptr, app::BinaryExpression* expr, bool and_also)
    IL2CPP_REGISTER_METHOD(0x01CF30F0, void, CompileLiftedLogicalBinaryExpression, app::LightCompiler* this_ptr, app::BinaryExpression* node, bool and_also)
    IL2CPP_REGISTER_METHOD(0x01CF3B60, void, CompileUnliftedLogicalBinaryExpression, app::LightCompiler* this_ptr, app::BinaryExpression* expr, bool and_also)
    IL2CPP_REGISTER_METHOD(0x01CF3CE0, void, CompileConditionalExpression, app::LightCompiler* this_ptr, app::Expression* expr, bool as_void)
    IL2CPP_REGISTER_METHOD(0x01CF4050, void, CompileLoopExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CF42E0, void, CompileSwitchExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CF4BD0, void, CompileStringSwitchExpression, app::LightCompiler* this_ptr, app::SwitchExpression* node)
    IL2CPP_REGISTER_METHOD(0x01CF54F0, void, CompileLabelExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CF5760, void, CompileGotoExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CF5A50, void, PushLabelBlock, app::LightCompiler* this_ptr, app::LabelScopeKind__Enum type)
    IL2CPP_REGISTER_METHOD(0x01CF5BB0, void, PopLabelBlock, app::LightCompiler* this_ptr, app::LabelScopeKind__Enum kind)
    IL2CPP_REGISTER_METHOD(0x01CF5BD0, app::LabelInfo*, EnsureLabel, app::LightCompiler* this_ptr, app::LabelTarget* node)
    IL2CPP_REGISTER_METHOD(0x01CF5D80, app::LabelInfo*, ReferenceLabel, app::LightCompiler* this_ptr, app::LabelTarget* node)
    IL2CPP_REGISTER_METHOD(0x01CF5E60, app::LabelInfo*, DefineLabel, app::LightCompiler* this_ptr, app::LabelTarget* node)
    IL2CPP_REGISTER_METHOD(0x01CF5FF0, bool, TryPushLabelBlock, app::LightCompiler* this_ptr, app::Expression* node)
    IL2CPP_REGISTER_METHOD(0x01CF6440, void, DefineBlockLabels, app::LightCompiler* this_ptr, app::Expression* node)
    IL2CPP_REGISTER_METHOD(0x01CF6650, void, CheckRethrow, app::LightCompiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CF6700, void, CompileThrowUnaryExpression, app::LightCompiler* this_ptr, app::Expression* expr, bool as_void)
    IL2CPP_REGISTER_METHOD(0x01CF6B90, void, CompileTryExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CF7C70, void, CompileTryFaultExpression, app::LightCompiler* this_ptr, app::TryExpression* expr)
    IL2CPP_REGISTER_METHOD(0x01CF8150, void, CompileMethodCallExpression_1, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(
        0x01CF8260,
        void,
        CompileMethodCallExpression_2,
        app::LightCompiler* this_ptr,
        app::Expression* object,
        app::MethodInfo_1* method_1,
        app::IArgumentProvider* arguments
    )
    IL2CPP_REGISTER_METHOD(
        0x01CF88A0,
        app::ByRefUpdater*,
        CompileArrayIndexAddress,
        app::LightCompiler* this_ptr,
        app::Expression* array,
        app::Expression* index,
        int32_t argument_index
    )
    IL2CPP_REGISTER_METHOD(0x01CF8BF0, void, EmitThisForMethodCall, app::LightCompiler* this_ptr, app::Expression* node)
    IL2CPP_REGISTER_METHOD(0x01CF8C00, bool, ShouldWritebackNode, app::Expression* node)
    IL2CPP_REGISTER_METHOD(0x01CF8DE0, app::ByRefUpdater*, CompileAddress, app::LightCompiler* this_ptr, app::Expression* node, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x01CF99E0,
        app::ByRefUpdater*,
        CompileMultiDimArrayAccess,
        app::LightCompiler* this_ptr,
        app::Expression* array,
        app::IArgumentProvider* arguments,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01CF9E80, void, CompileNewExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFA5A0, void, CompileMemberExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFA6A0, void, CompileMember, app::LightCompiler* this_ptr, app::Expression* from, app::MemberInfo_1* member, bool for_binding)
    IL2CPP_REGISTER_METHOD(0x01CFAA30, void, CompileNewArrayExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFB0A0, void, CompileDebugInfoExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFB2F0, void, CompileRuntimeVariablesExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFB720, void, CompileLambdaExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFBB70, void, CompileCoalesceBinaryExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFC0B0, void, CompileInvocationExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFC340, void, CompileListInitExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(
        0x01CFC410,
        void,
        CompileListInit,
        app::LightCompiler* this_ptr,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_* initializers
    )
    IL2CPP_REGISTER_METHOD(0x01CFC760, void, CompileMemberInitExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(
        0x01CFC830,
        void,
        CompileMemberInit,
        app::LightCompiler* this_ptr,
        app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_* bindings
    )
    IL2CPP_REGISTER_METHOD(0x01CFCC70, app::Type*, GetMemberType, app::MemberInfo_1* member)
    IL2CPP_REGISTER_METHOD(0x01CFCDD0, void, CompileQuoteUnaryExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFD310, void, CompileUnboxUnaryExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFD480, void, CompileTypeEqualExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFD670, void, CompileTypeAsExpression, app::LightCompiler* this_ptr, app::UnaryExpression* node)
    IL2CPP_REGISTER_METHOD(0x01CFD810, void, CompileTypeIsExpression, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFDBC0, void, Compile_1, app::LightCompiler* this_ptr, app::Expression* expr, bool as_void)
    IL2CPP_REGISTER_METHOD(0x01CFDBE0, void, CompileAsVoid, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFDDB0, void, CompileNoLabelPush, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFE950, void, Compile_2, app::LightCompiler* this_ptr, app::Expression* expr)
    IL2CPP_REGISTER_METHOD(0x01CFE9B0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01AF07C0, void, CompileIntSwitchExpression_1, app::LightCompiler* this_ptr, app::SwitchExpression* node)
    IL2CPP_REGISTER_METHOD(0x01AF00A0, void, CompileIntSwitchExpression_2, app::LightCompiler* this_ptr, app::SwitchExpression* node)
} // namespace app::classes::System::Linq::Expressions::Interpreter::LightCompiler
