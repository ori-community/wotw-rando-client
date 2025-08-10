#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryExpression.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/BlockExpression.h>
#include <Modloader/app/structs/CatchBlock.h>
#include <Modloader/app/structs/CatchBlock__Array.h>
#include <Modloader/app/structs/ConditionalExpression.h>
#include <Modloader/app/structs/ConstantExpression.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/DefaultExpression.h>
#include <Modloader/app/structs/ElementInit.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/ExpressionVisitor.h>
#include <Modloader/app/structs/Expression_1_DynamicInstantiationDescriptor_CountGetter_.h>
#include <Modloader/app/structs/Expression_1_DynamicInstantiationScanner_EvaluationFn_1_.h>
#include <Modloader/app/structs/Expression_1_System_Object_.h>
#include <Modloader/app/structs/Expression__Array.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/GotoExpression.h>
#include <Modloader/app/structs/GotoExpressionKind__Enum.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_CatchBlock_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_ElementInit_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_MemberBinding_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_SwitchCase_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/IndexExpression.h>
#include <Modloader/app/structs/InvocationExpression.h>
#include <Modloader/app/structs/LabelExpression.h>
#include <Modloader/app/structs/LabelTarget.h>
#include <Modloader/app/structs/LambdaExpression.h>
#include <Modloader/app/structs/ListInitExpression.h>
#include <Modloader/app/structs/LoopExpression.h>
#include <Modloader/app/structs/MemberAssignment.h>
#include <Modloader/app/structs/MemberExpression.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MemberInitExpression.h>
#include <Modloader/app/structs/MemberListBinding.h>
#include <Modloader/app/structs/MemberMemberBinding.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/MethodCallExpression.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/NewArrayExpression.h>
#include <Modloader/app/structs/NewExpression.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParameterExpression.h>
#include <Modloader/app/structs/ParameterExpression__Array.h>
#include <Modloader/app/structs/ParameterInfo_1.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/RuntimeVariablesExpression.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SwitchCase.h>
#include <Modloader/app/structs/SwitchExpression.h>
#include <Modloader/app/structs/TryExpression.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeBinaryExpression.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/UnaryExpression.h>

namespace app::classes::System::Linq::Expressions::Expression {
    IL2CPP_REGISTER_METHOD(0x029AE890, app::BinaryExpression*, Assign, app::Expression* left, app::Expression* right)
    IL2CPP_REGISTER_METHOD(
        0x029AEBF0,
        app::BinaryExpression*,
        GetUserDefinedBinaryOperator_1,
        app::ExpressionType__Enum binary_type,
        app::String* name,
        app::Expression* left,
        app::Expression* right,
        bool lift_to_null
    )
    IL2CPP_REGISTER_METHOD(
        0x029AF0E0,
        app::BinaryExpression*,
        GetMethodBasedBinaryOperator,
        app::ExpressionType__Enum binary_type,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        bool lift_to_null
    )
    IL2CPP_REGISTER_METHOD(
        0x029AF880,
        app::BinaryExpression*,
        GetMethodBasedAssignOperator,
        app::ExpressionType__Enum binary_type,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion,
        bool lift_to_null
    )
    IL2CPP_REGISTER_METHOD(
        0x029AFBF0,
        app::BinaryExpression*,
        GetUserDefinedBinaryOperatorOrThrow,
        app::ExpressionType__Enum binary_type,
        app::String* name,
        app::Expression* left,
        app::Expression* right,
        bool lift_to_null
    )
    IL2CPP_REGISTER_METHOD(
        0x029AFEC0,
        app::BinaryExpression*,
        GetUserDefinedAssignOperatorOrThrow,
        app::ExpressionType__Enum binary_type,
        app::String* name,
        app::Expression* left,
        app::Expression* right,
        app::LambdaExpression* conversion,
        bool lift_to_null
    )
    IL2CPP_REGISTER_METHOD(
        0x029B0230,
        app::MethodInfo_1*,
        GetUserDefinedBinaryOperator_2,
        app::ExpressionType__Enum binary_type,
        app::Type* left_type,
        app::Type* right_type,
        app::String* name
    )
    IL2CPP_REGISTER_METHOD(
        0x029B0520,
        bool,
        IsLiftingConditionalLogicalOperator,
        app::Type* left,
        app::Type* right,
        app::MethodInfo_1* method_1,
        app::ExpressionType__Enum binary_type
    )
    IL2CPP_REGISTER_METHOD(0x029B05B0, bool, ParameterIsAssignable, app::ParameterInfo_1* pi, app::Type* arg_type)
    IL2CPP_REGISTER_METHOD(
        0x029B0630,
        void,
        ValidateParamswithOperandsOrThrow,
        app::Type* param_type,
        app::Type* operand_type,
        app::ExpressionType__Enum expr_type,
        app::String* name
    )
    IL2CPP_REGISTER_METHOD(0x029B0720, void, ValidateOperator, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029B0880, void, ValidateMethodInfo, app::MethodInfo_1* method_1, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x029B0960, bool, IsNullComparison, app::Expression* left, app::Expression* right)
    IL2CPP_REGISTER_METHOD(0x029B0AB0, bool, IsNullConstant, app::Expression* e)
    IL2CPP_REGISTER_METHOD(
        0x029B0B80,
        void,
        ValidateUserDefinedConditionalLogicOperator,
        app::ExpressionType__Enum node_type,
        app::Type* left,
        app::Type* right,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x029B1390,
        void,
        VerifyOpTrueFalse,
        app::ExpressionType__Enum node_type,
        app::Type* left,
        app::MethodInfo_1* op_true,
        app::String* param_name
    )
    IL2CPP_REGISTER_METHOD(0x029B1570, bool, IsValidLiftedConditionalLogicalOperator, app::Type* left, app::Type* right, app::ParameterInfo_1__Array* pms)
    IL2CPP_REGISTER_METHOD(
        0x029B1610,
        app::BinaryExpression*,
        MakeBinary_1,
        app::ExpressionType__Enum binary_type,
        app::Expression* left,
        app::Expression* right,
        bool lift_to_null,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x029B1700,
        app::BinaryExpression*,
        MakeBinary_2,
        app::ExpressionType__Enum binary_type,
        app::Expression* left,
        app::Expression* right,
        bool lift_to_null,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(0x029B2510, app::BinaryExpression*, Equal_1, app::Expression* left, app::Expression* right)
    IL2CPP_REGISTER_METHOD(
        0x029B25D0,
        app::BinaryExpression*,
        Equal_2,
        app::Expression* left,
        app::Expression* right,
        bool lift_to_null,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(0x029B2770, app::BinaryExpression*, ReferenceEqual, app::Expression* left, app::Expression* right)
    IL2CPP_REGISTER_METHOD(0x029B29A0, app::BinaryExpression*, NotEqual_1, app::Expression* left, app::Expression* right)
    IL2CPP_REGISTER_METHOD(
        0x029B2A60,
        app::BinaryExpression*,
        NotEqual_2,
        app::Expression* left,
        app::Expression* right,
        bool lift_to_null,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(0x029B2C00, app::BinaryExpression*, ReferenceNotEqual, app::Expression* left, app::Expression* right)
    IL2CPP_REGISTER_METHOD(
        0x029B2E30,
        app::BinaryExpression*,
        GetEqualityComparisonOperator,
        app::ExpressionType__Enum binary_type,
        app::String* op_name,
        app::Expression* left,
        app::Expression* right,
        bool lift_to_null
    )
    IL2CPP_REGISTER_METHOD(
        0x029B3560,
        app::BinaryExpression*,
        GreaterThan,
        app::Expression* left,
        app::Expression* right,
        bool lift_to_null,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(0x029B3700, app::BinaryExpression*, LessThan_1, app::Expression* left, app::Expression* right)
    IL2CPP_REGISTER_METHOD(
        0x029B37C0,
        app::BinaryExpression*,
        LessThan_2,
        app::Expression* left,
        app::Expression* right,
        bool lift_to_null,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x029B3960,
        app::BinaryExpression*,
        GreaterThanOrEqual,
        app::Expression* left,
        app::Expression* right,
        bool lift_to_null,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x029B3B00,
        app::BinaryExpression*,
        LessThanOrEqual,
        app::Expression* left,
        app::Expression* right,
        bool lift_to_null,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x029B3CA0,
        app::BinaryExpression*,
        GetComparisonOperator,
        app::ExpressionType__Enum binary_type,
        app::String* op_name,
        app::Expression* left,
        app::Expression* right,
        bool lift_to_null
    )
    IL2CPP_REGISTER_METHOD(0x029B4020, app::BinaryExpression*, AndAlso_1, app::Expression* left, app::Expression* right)
    IL2CPP_REGISTER_METHOD(0x029B40D0, app::BinaryExpression*, AndAlso_2, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029B4920, app::BinaryExpression*, OrElse, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029B5190, app::BinaryExpression*, Coalesce, app::Expression* left, app::Expression* right, app::LambdaExpression* conversion)
    IL2CPP_REGISTER_METHOD(0x029B58F0, app::Type*, ValidateCoalesceArgTypes, app::Type* left, app::Type* right)
    IL2CPP_REGISTER_METHOD(0x029B5A60, app::BinaryExpression*, Add, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029B5D80,
        app::BinaryExpression*,
        AddAssign,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(
        0x029B6100,
        void,
        ValidateOpAssignConversionLambda,
        app::LambdaExpression* conversion,
        app::Expression* left,
        app::MethodInfo_1* method_1,
        app::ExpressionType__Enum node_type
    )
    IL2CPP_REGISTER_METHOD(
        0x029B63A0,
        app::BinaryExpression*,
        AddAssignChecked,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(0x029B6720, app::BinaryExpression*, AddChecked, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029B6A40, app::BinaryExpression*, Subtract, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029B6D60,
        app::BinaryExpression*,
        SubtractAssign,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(
        0x029B70E0,
        app::BinaryExpression*,
        SubtractAssignChecked,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(0x029B7460, app::BinaryExpression*, SubtractChecked, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029B7780, app::BinaryExpression*, Divide, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029B7AA0,
        app::BinaryExpression*,
        DivideAssign,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(0x029B7E20, app::BinaryExpression*, Modulo, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029B8140,
        app::BinaryExpression*,
        ModuloAssign,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(0x029B84C0, app::BinaryExpression*, Multiply, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029B87E0,
        app::BinaryExpression*,
        MultiplyAssign,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(
        0x029B8B60,
        app::BinaryExpression*,
        MultiplyAssignChecked,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(0x029B8EE0, app::BinaryExpression*, MultiplyChecked, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029B9200, bool, IsSimpleShift, app::Type* left, app::Type* right)
    IL2CPP_REGISTER_METHOD(0x029B92E0, app::Type*, GetResultTypeOfShift, app::Type* left, app::Type* right)
    IL2CPP_REGISTER_METHOD(0x029B9460, app::BinaryExpression*, LeftShift, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029B97B0,
        app::BinaryExpression*,
        LeftShiftAssign,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(0x029B9B60, app::BinaryExpression*, RightShift, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029B9EB0,
        app::BinaryExpression*,
        RightShiftAssign,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(0x029BA260, app::BinaryExpression*, And, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029BA580,
        app::BinaryExpression*,
        AndAssign,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(0x029BA900, app::BinaryExpression*, Or, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029BAC20,
        app::BinaryExpression*,
        OrAssign,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(0x029BAFA0, app::BinaryExpression*, ExclusiveOr, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029BB2C0,
        app::BinaryExpression*,
        ExclusiveOrAssign,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(0x029BB640, app::BinaryExpression*, Power, app::Expression* left, app::Expression* right, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029BB870,
        app::BinaryExpression*,
        PowerAssign,
        app::Expression* left,
        app::Expression* right,
        app::MethodInfo_1* method_1,
        app::LambdaExpression* conversion
    )
    IL2CPP_REGISTER_METHOD(0x029BBAD0, app::BinaryExpression*, ArrayIndex, app::Expression* array, app::Expression* index)
    IL2CPP_REGISTER_METHOD(0x029BBDA0, app::BlockExpression*, Block_1, app::Expression* arg0, app::Expression* arg1)
    IL2CPP_REGISTER_METHOD(0x029BBF20, app::BlockExpression*, Block_2, app::Expression* arg0, app::Expression* arg1, app::Expression* arg2)
    IL2CPP_REGISTER_METHOD(
        0x029BC0D0,
        app::BlockExpression*,
        Block_3,
        app::Expression* arg0,
        app::Expression* arg1,
        app::Expression* arg2,
        app::Expression* arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x029BC2A0,
        app::BlockExpression*,
        Block_4,
        app::Expression* arg0,
        app::Expression* arg1,
        app::Expression* arg2,
        app::Expression* arg3,
        app::Expression* arg4
    )
    IL2CPP_REGISTER_METHOD(0x029BC490, app::BlockExpression*, Block_5, app::IEnumerable_1_System_Linq_Expressions_Expression_* expressions)
    IL2CPP_REGISTER_METHOD(0x029BC570, app::BlockExpression*, Block_6, app::Type* type, app::Expression__Array* expressions)
    IL2CPP_REGISTER_METHOD(0x029BC630, app::BlockExpression*, Block_7, app::Type* type, app::IEnumerable_1_System_Linq_Expressions_Expression_* expressions)
    IL2CPP_REGISTER_METHOD(
        0x029BC720,
        app::BlockExpression*,
        Block_8,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* variables,
        app::Expression__Array* expressions
    )
    IL2CPP_REGISTER_METHOD(
        0x029BC7D0,
        app::BlockExpression*,
        Block_9,
        app::Type* type,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* variables,
        app::Expression__Array* expressions
    )
    IL2CPP_REGISTER_METHOD(
        0x029BC890,
        app::BlockExpression*,
        Block_10,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* variables,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* expressions
    )
    IL2CPP_REGISTER_METHOD(
        0x029BCA50,
        app::BlockExpression*,
        Block_11,
        app::Type* type,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* variables,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* expressions
    )
    IL2CPP_REGISTER_METHOD(
        0x029BCD20,
        app::BlockExpression*,
        BlockCore,
        app::Type* type,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* variables,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_* expressions
    )
    IL2CPP_REGISTER_METHOD(
        0x029BD3A0,
        void,
        ValidateVariables,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* var_list,
        app::String* collection_name
    )
    IL2CPP_REGISTER_METHOD(
        0x029BD680,
        app::BlockExpression*,
        GetOptimizedBlockExpression,
        app::IReadOnlyList_1_System_Linq_Expressions_Expression_* expressions
    )
    IL2CPP_REGISTER_METHOD(0x029BDE00, app::CatchBlock*, Catch, app::ParameterExpression* variable, app::Expression* body)
    IL2CPP_REGISTER_METHOD(
        0x029BDF00,
        app::CatchBlock*,
        MakeCatchBlock,
        app::Type* type,
        app::ParameterExpression* variable,
        app::Expression* body,
        app::Expression* filter
    )
    IL2CPP_REGISTER_METHOD(0x029BE1D0, app::ConditionalExpression*, Condition_1, app::Expression* test, app::Expression* if_true, app::Expression* if_false)
    IL2CPP_REGISTER_METHOD(
        0x029BE3D0,
        app::ConditionalExpression*,
        Condition_2,
        app::Expression* test,
        app::Expression* if_true,
        app::Expression* if_false,
        app::Type* type
    )
    IL2CPP_REGISTER_METHOD(0x029BE620, app::ConditionalExpression*, IfThen, app::Expression* test, app::Expression* if_true)
    IL2CPP_REGISTER_METHOD(0x029BE730, app::ConditionalExpression*, IfThenElse, app::Expression* test, app::Expression* if_true, app::Expression* if_false)
    IL2CPP_REGISTER_METHOD(0x029BE840, app::ConstantExpression*, Constant_1, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x029BE990, app::ConstantExpression*, Constant_2, app::Object* value, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029BEE80, app::DefaultExpression*, Empty, )
    IL2CPP_REGISTER_METHOD(0x029BF000, app::DefaultExpression*, Default, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x029BF180,
        app::ElementInit*,
        ElementInit,
        app::MethodInfo_1* add_method,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* arguments
    )
    IL2CPP_REGISTER_METHOD(0x029BF360, void, ValidateElementInitAddMethodInfo, app::MethodInfo_1* add_method, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Expression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029BF6D0, app::ExpressionType__Enum, get_NodeType, app::Expression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029BF800, app::Type*, get_Type, app::Expression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanReduce, app::Expression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029BF930, app::Expression*, Reduce, app::Expression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029BF9E0, app::Expression*, VisitChildren, app::Expression* this_ptr, app::ExpressionVisitor* visitor)
    IL2CPP_REGISTER_METHOD(0x029BFAC0, app::Expression*, Accept, app::Expression* this_ptr, app::ExpressionVisitor* visitor)
    IL2CPP_REGISTER_METHOD(0x029BFAF0, app::Expression*, ReduceAndCheck, app::Expression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029BFC30, app::String*, ToString, app::Expression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029BFC40, app::String*, get_DebugView, app::Expression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029BFEB0, void, RequiresCanRead, app::IReadOnlyList_1_System_Linq_Expressions_Expression_* items, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x029C0000, void, RequiresCanWrite, app::Expression* expression, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x029C0230, app::GotoExpression*, Break, app::LabelTarget* target)
    IL2CPP_REGISTER_METHOD(0x029C0320, app::GotoExpression*, Return_1, app::LabelTarget* target)
    IL2CPP_REGISTER_METHOD(0x029C0410, app::GotoExpression*, Return_2, app::LabelTarget* target, app::Expression* value)
    IL2CPP_REGISTER_METHOD(0x029C0510, app::GotoExpression*, Goto_1, app::LabelTarget* target, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029C05D0, app::GotoExpression*, Goto_2, app::LabelTarget* target, app::Expression* value)
    IL2CPP_REGISTER_METHOD(
        0x029C06D0,
        app::GotoExpression*,
        MakeGoto,
        app::GotoExpressionKind__Enum kind,
        app::LabelTarget* target,
        app::Expression* value,
        app::Type* type
    )
    IL2CPP_REGISTER_METHOD(
        0x029C0900,
        void,
        ValidateGoto,
        app::LabelTarget* target,
        app::Expression** value,
        app::String* target_parameter,
        app::String* value_parameter,
        app::Type* type
    )
    IL2CPP_REGISTER_METHOD(0x029C0BE0, void, ValidateGotoType, app::Type* expected_type, app::Expression** value, app::String* param_name)
    IL2CPP_REGISTER_METHOD(
        0x029C0D50,
        app::IndexExpression*,
        MakeIndex,
        app::Expression* instance,
        app::PropertyInfo_1* indexer,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* arguments
    )
    IL2CPP_REGISTER_METHOD(0x029C0E40, app::IndexExpression*, ArrayAccess_1, app::Expression* array, app::Expression__Array* indexes)
    IL2CPP_REGISTER_METHOD(
        0x029C0EF0,
        app::IndexExpression*,
        ArrayAccess_2,
        app::Expression* array,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* indexes
    )
    IL2CPP_REGISTER_METHOD(
        0x029C1330,
        app::IndexExpression*,
        Property_1,
        app::Expression* instance,
        app::PropertyInfo_1* indexer,
        app::Expression__Array* arguments
    )
    IL2CPP_REGISTER_METHOD(
        0x029C13F0,
        app::IndexExpression*,
        Property_2,
        app::Expression* instance,
        app::PropertyInfo_1* indexer,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* arguments
    )
    IL2CPP_REGISTER_METHOD(
        0x029C14D0,
        app::IndexExpression*,
        MakeIndexProperty,
        app::Expression* instance,
        app::PropertyInfo_1* indexer,
        app::String* param_name,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_* arg_list
    )
    IL2CPP_REGISTER_METHOD(
        0x029C1670,
        void,
        ValidateIndexedProperty,
        app::Expression* instance,
        app::PropertyInfo_1* indexer,
        app::String* param_name,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_** arg_list
    )
    IL2CPP_REGISTER_METHOD(
        0x029C1D00,
        void,
        ValidateAccessor,
        app::Expression* instance,
        app::MethodInfo_1* method_1,
        app::ParameterInfo_1__Array* indexes,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_** arguments,
        app::String* param_name
    )
    IL2CPP_REGISTER_METHOD(
        0x029C1F30,
        void,
        ValidateAccessorArgumentTypes,
        app::MethodInfo_1* method_1,
        app::ParameterInfo_1__Array* indexes,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_** arguments,
        app::String* param_name
    )
    IL2CPP_REGISTER_METHOD(0x029C2500, app::InvocationExpression*, Invoke_1, app::Expression* expression)
    IL2CPP_REGISTER_METHOD(0x029C26E0, app::InvocationExpression*, Invoke_2, app::Expression* expression, app::Expression* arg0)
    IL2CPP_REGISTER_METHOD(0x029C2940, app::InvocationExpression*, Invoke_3, app::Expression* expression, app::Expression* arg0, app::Expression* arg1)
    IL2CPP_REGISTER_METHOD(
        0x029C2C10,
        app::InvocationExpression*,
        Invoke_4,
        app::Expression* expression,
        app::Expression* arg0,
        app::Expression* arg1,
        app::Expression* arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x029C2F40,
        app::InvocationExpression*,
        Invoke_5,
        app::Expression* expression,
        app::Expression* arg0,
        app::Expression* arg1,
        app::Expression* arg2,
        app::Expression* arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x029C32C0,
        app::InvocationExpression*,
        Invoke_6,
        app::Expression* expression,
        app::Expression* arg0,
        app::Expression* arg1,
        app::Expression* arg2,
        app::Expression* arg3,
        app::Expression* arg4
    )
    IL2CPP_REGISTER_METHOD(
        0x029C36B0,
        app::InvocationExpression*,
        Invoke_7,
        app::Expression* expression,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* arguments
    )
    IL2CPP_REGISTER_METHOD(0x029C3BF0, app::MethodInfo_1*, GetInvokeMethod, app::Expression* expression)
    IL2CPP_REGISTER_METHOD(0x029C3DF0, app::LabelExpression*, Label_1, app::LabelTarget* target)
    IL2CPP_REGISTER_METHOD(0x029C3E90, app::LabelExpression*, Label_2, app::LabelTarget* target, app::Expression* default_value)
    IL2CPP_REGISTER_METHOD(0x029C40A0, app::LabelTarget*, Label_3, )
    IL2CPP_REGISTER_METHOD(0x029C4170, app::LabelTarget*, Label_4, app::String* name)
    IL2CPP_REGISTER_METHOD(0x029C4250, app::LabelTarget*, Label_5, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029C42F0, app::LabelTarget*, Label_6, app::Type* type, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x029C4460,
        app::LambdaExpression*,
        CreateLambda,
        app::Type* delegate_type,
        app::Expression* body,
        app::String* name,
        bool tail_call,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* parameters
    )
    IL2CPP_REGISTER_METHOD(0x029C4A70, app::LambdaExpression*, Lambda_1, app::Expression* body, bool tail_call, app::ParameterExpression__Array* parameters)
    IL2CPP_REGISTER_METHOD(
        0x029C4BB0,
        app::LambdaExpression*,
        Lambda_2,
        app::Expression* body,
        bool tail_call,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* parameters
    )
    IL2CPP_REGISTER_METHOD(
        0x029C4C80,
        app::LambdaExpression*,
        Lambda_3,
        app::Type* delegate_type,
        app::Expression* body,
        app::ParameterExpression__Array* parameters
    )
    IL2CPP_REGISTER_METHOD(
        0x029C4E00,
        app::LambdaExpression*,
        Lambda_4,
        app::Expression* body,
        app::String* name,
        bool tail_call,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* parameters
    )
    IL2CPP_REGISTER_METHOD(
        0x029C5270,
        app::LambdaExpression*,
        Lambda_5,
        app::Type* delegate_type,
        app::Expression* body,
        app::String* name,
        bool tail_call,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* parameters
    )
    IL2CPP_REGISTER_METHOD(
        0x029C5380,
        void,
        ValidateLambdaArgs,
        app::Type* delegate_type,
        app::Expression** body,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* parameters,
        app::String* param_name
    )
    IL2CPP_REGISTER_METHOD(
        0x029C5B70,
        app::ListInitExpression*,
        ListInit,
        app::NewExpression* new_expression,
        app::IEnumerable_1_System_Linq_Expressions_ElementInit_* initializers
    )
    IL2CPP_REGISTER_METHOD(0x029C5DD0, app::LoopExpression*, Loop_1, app::Expression* body, app::LabelTarget* break_1)
    IL2CPP_REGISTER_METHOD(0x029C5E80, app::LoopExpression*, Loop_2, app::Expression* body, app::LabelTarget* break_1, app::LabelTarget* continue_1)
    IL2CPP_REGISTER_METHOD(0x029C60D0, app::MemberAssignment*, Bind, app::MemberInfo_1* member, app::Expression* expression)
    IL2CPP_REGISTER_METHOD(0x029C62F0, void, ValidateSettableFieldOrPropertyMember, app::MemberInfo_1* member, app::Type** member_type)
    IL2CPP_REGISTER_METHOD(0x029C6500, app::MemberExpression*, Field_1, app::Expression* expression, app::FieldInfo_1* field)
    IL2CPP_REGISTER_METHOD(0x029C67F0, app::MemberExpression*, Field_2, app::Expression* expression, app::String* field_name)
    IL2CPP_REGISTER_METHOD(0x029C69A0, app::MemberExpression*, Property_3, app::Expression* expression, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x029C6B40, app::MemberExpression*, Property_4, app::Expression* expression, app::PropertyInfo_1* property)
    IL2CPP_REGISTER_METHOD(0x029C7000, app::PropertyInfo_1*, GetProperty, app::MethodInfo_1* mi, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x029C72A0, bool, CheckMethod, app::MethodInfo_1* method_1, app::MethodInfo_1* property_method)
    IL2CPP_REGISTER_METHOD(0x029C73D0, app::MemberExpression*, MakeMemberAccess, app::Expression* expression, app::MemberInfo_1* member)
    IL2CPP_REGISTER_METHOD(
        0x029C7570,
        app::MemberInitExpression*,
        MemberInit,
        app::NewExpression* new_expression,
        app::IEnumerable_1_System_Linq_Expressions_MemberBinding_* bindings
    )
    IL2CPP_REGISTER_METHOD(
        0x029C77C0,
        app::MemberListBinding*,
        ListBind,
        app::MemberInfo_1* member,
        app::IEnumerable_1_System_Linq_Expressions_ElementInit_* initializers
    )
    IL2CPP_REGISTER_METHOD(
        0x029C7990,
        void,
        ValidateListInitArgs,
        app::Type* list_type,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_* initializers,
        app::String* list_type_param_name
    )
    IL2CPP_REGISTER_METHOD(
        0x029C7B80,
        app::MemberMemberBinding*,
        MemberBind,
        app::MemberInfo_1* member,
        app::IEnumerable_1_System_Linq_Expressions_MemberBinding_* bindings
    )
    IL2CPP_REGISTER_METHOD(0x029C7D50, void, ValidateGettableFieldOrPropertyMember, app::MemberInfo_1* member, app::Type** member_type)
    IL2CPP_REGISTER_METHOD(
        0x029C7FB0,
        void,
        ValidateMemberInitArgs,
        app::Type* type,
        app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_* bindings
    )
    IL2CPP_REGISTER_METHOD(0x029C81B0, app::MethodCallExpression*, Call_1, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029C8350, app::MethodCallExpression*, Call_2, app::MethodInfo_1* method_1, app::Expression* arg0)
    IL2CPP_REGISTER_METHOD(0x029C8580, app::MethodCallExpression*, Call_3, app::MethodInfo_1* method_1, app::Expression* arg0, app::Expression* arg1)
    IL2CPP_REGISTER_METHOD(
        0x029C8820,
        app::MethodCallExpression*,
        Call_4,
        app::MethodInfo_1* method_1,
        app::Expression* arg0,
        app::Expression* arg1,
        app::Expression* arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x029C8B40,
        app::MethodCallExpression*,
        Call_5,
        app::MethodInfo_1* method_1,
        app::Expression* arg0,
        app::Expression* arg1,
        app::Expression* arg2,
        app::Expression* arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x029C8ED0,
        app::MethodCallExpression*,
        Call_6,
        app::MethodInfo_1* method_1,
        app::Expression* arg0,
        app::Expression* arg1,
        app::Expression* arg2,
        app::Expression* arg3,
        app::Expression* arg4
    )
    IL2CPP_REGISTER_METHOD(0x029C92F0, app::MethodCallExpression*, Call_7, app::MethodInfo_1* method_1, app::Expression__Array* arguments)
    IL2CPP_REGISTER_METHOD(
        0x029C93A0,
        app::MethodCallExpression*,
        Call_8,
        app::MethodInfo_1* method_1,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* arguments
    )
    IL2CPP_REGISTER_METHOD(0x029C9450, app::MethodCallExpression*, Call_9, app::Expression* instance, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029C96D0,
        app::MethodCallExpression*,
        Call_10,
        app::Expression* instance,
        app::MethodInfo_1* method_1,
        app::Expression__Array* arguments
    )
    IL2CPP_REGISTER_METHOD(0x029C9790, app::MethodCallExpression*, Call_11, app::Expression* instance, app::MethodInfo_1* method_1, app::Expression* arg0)
    IL2CPP_REGISTER_METHOD(
        0x029C9AB0,
        app::MethodCallExpression*,
        Call_12,
        app::Expression* instance,
        app::MethodInfo_1* method_1,
        app::Expression* arg0,
        app::Expression* arg1
    )
    IL2CPP_REGISTER_METHOD(
        0x029C9E50,
        app::MethodCallExpression*,
        Call_13,
        app::Expression* instance,
        app::MethodInfo_1* method_1,
        app::Expression* arg0,
        app::Expression* arg1,
        app::Expression* arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x029CA270,
        app::MethodCallExpression*,
        Call_14,
        app::Expression* instance,
        app::String* method_name,
        app::Type__Array* type_arguments,
        app::Expression__Array* arguments
    )
    IL2CPP_REGISTER_METHOD(
        0x029CA3C0,
        app::MethodCallExpression*,
        Call_15,
        app::Expression* instance,
        app::MethodInfo_1* method_1,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* arguments
    )
    IL2CPP_REGISTER_METHOD(0x029CA9E0, app::ParameterInfo_1__Array*, ValidateMethodAndGetParameters, app::Expression* instance, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029CAAB0, void, ValidateStaticOrInstanceMethod, app::Expression* instance, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029CABF0, void, ValidateCallInstanceType, app::Type* instance_type, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029CACC0,
        void,
        ValidateArgumentTypes,
        app::MethodBase* method_1,
        app::ExpressionType__Enum node_kind,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_** arguments,
        app::String* method_param_name
    )
    IL2CPP_REGISTER_METHOD(0x029CACD0, app::ParameterInfo_1__Array*, GetParametersForValidation, app::MethodBase* method_1, app::ExpressionType__Enum node_kind)
    IL2CPP_REGISTER_METHOD(
        0x029CACE0,
        void,
        ValidateArgumentCount,
        app::MethodBase* method_1,
        app::ExpressionType__Enum node_kind,
        int32_t count,
        app::ParameterInfo_1__Array* pis
    )
    IL2CPP_REGISTER_METHOD(
        0x029CACF0,
        app::Expression*,
        ValidateOneArgument,
        app::MethodBase* method_1,
        app::ExpressionType__Enum node_kind,
        app::Expression* arg,
        app::ParameterInfo_1* pi,
        app::String* method_param_name,
        app::String* argument_param_name
    )
    IL2CPP_REGISTER_METHOD(0x029CAD30, bool, TryQuote, app::Type* parameter_type, app::Expression** argument)
    IL2CPP_REGISTER_METHOD(
        0x029CAD40,
        app::MethodInfo_1*,
        FindMethod,
        app::Type* type,
        app::String* method_name,
        app::Type__Array* type_args,
        app::Expression__Array* args,
        app::BindingFlags__Enum flags
    )
    IL2CPP_REGISTER_METHOD(0x029CB160, bool, IsCompatible, app::MethodBase* m, app::Expression__Array* arguments)
    IL2CPP_REGISTER_METHOD(0x029CB3E0, app::MethodInfo_1*, ApplyTypeArgs, app::MethodInfo_1* m, app::Type__Array* type_args)
    IL2CPP_REGISTER_METHOD(0x029CB4A0, app::NewArrayExpression*, NewArrayInit_1, app::Type* type, app::Expression__Array* initializers)
    IL2CPP_REGISTER_METHOD(
        0x029CB550,
        app::NewArrayExpression*,
        NewArrayInit_2,
        app::Type* type,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* initializers
    )
    IL2CPP_REGISTER_METHOD(
        0x029CBA10,
        app::NewArrayExpression*,
        NewArrayBounds,
        app::Type* type,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* bounds
    )
    IL2CPP_REGISTER_METHOD(
        0x029CBCB0,
        app::NewExpression*,
        New_1,
        app::ConstructorInfo* constructor,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* arguments
    )
    IL2CPP_REGISTER_METHOD(
        0x029CBF50,
        app::NewExpression*,
        New_2,
        app::ConstructorInfo* constructor,
        app::IEnumerable_1_System_Linq_Expressions_Expression_* arguments,
        app::IEnumerable_1_System_Reflection_MemberInfo_* members
    )
    IL2CPP_REGISTER_METHOD(
        0x029CC210,
        void,
        ValidateNewArgs,
        app::ConstructorInfo* constructor,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_** arguments,
        app::ReadOnlyCollection_1_System_Reflection_MemberInfo_** members
    )
    IL2CPP_REGISTER_METHOD(
        0x029CCDF0,
        void,
        ValidateAnonymousTypeMember,
        app::MemberInfo_1** member,
        app::Type** member_type,
        app::String* param_name,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x029CD130, void, ValidateConstructor, app::ConstructorInfo* constructor, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x029CD1F0, app::ParameterExpression*, Parameter_1, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029CD290, app::ParameterExpression*, Variable_1, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029CD330, app::ParameterExpression*, Parameter_2, app::Type* type, app::String* name)
    IL2CPP_REGISTER_METHOD(0x029CD430, app::ParameterExpression*, Variable_2, app::Type* type, app::String* name)
    IL2CPP_REGISTER_METHOD(0x029CD4F0, void, Validate, app::Type* type, bool allow_by_ref)
    IL2CPP_REGISTER_METHOD(
        0x029CD600,
        app::RuntimeVariablesExpression*,
        RuntimeVariables,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* variables
    )
    IL2CPP_REGISTER_METHOD(0x029CD910, app::SwitchCase*, SwitchCase, app::Expression* body, app::IEnumerable_1_System_Linq_Expressions_Expression_* test_values)
    IL2CPP_REGISTER_METHOD(
        0x029CDB90,
        app::SwitchExpression*,
        Switch,
        app::Type* type,
        app::Expression* switch_value,
        app::Expression* default_body,
        app::MethodInfo_1* comparison,
        app::IEnumerable_1_System_Linq_Expressions_SwitchCase_* cases
    )
    IL2CPP_REGISTER_METHOD(
        0x029CE9F0,
        void,
        ValidateSwitchCaseType,
        app::Expression* case_1,
        bool custom_type,
        app::Type* result_type,
        app::String* parameter_name
    )
    IL2CPP_REGISTER_METHOD(0x029CEB60, app::TryExpression*, TryFinally, app::Expression* body, app::Expression* finally)
    IL2CPP_REGISTER_METHOD(0x029CEC20, app::TryExpression*, TryCatch, app::Expression* body, app::CatchBlock__Array* handlers)
    IL2CPP_REGISTER_METHOD(
        0x029CECE0,
        app::TryExpression*,
        MakeTry,
        app::Type* type,
        app::Expression* body,
        app::Expression* finally,
        app::Expression* fault,
        app::IEnumerable_1_System_Linq_Expressions_CatchBlock_* handlers
    )
    IL2CPP_REGISTER_METHOD(
        0x029CF090,
        void,
        ValidateTryAndCatchHaveSameType,
        app::Type* type,
        app::Expression* try_body,
        app::ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_* handlers
    )
    IL2CPP_REGISTER_METHOD(0x029CF6D0, app::TypeBinaryExpression*, TypeIs, app::Expression* expression, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029CF8B0, app::TypeBinaryExpression*, TypeEqual, app::Expression* expression, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x029CFA90,
        app::UnaryExpression*,
        MakeUnary,
        app::ExpressionType__Enum unary_type,
        app::Expression* operand,
        app::Type* type,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x029D01E0,
        app::UnaryExpression*,
        GetUserDefinedUnaryOperatorOrThrow,
        app::ExpressionType__Enum unary_type,
        app::String* name,
        app::Expression* operand
    )
    IL2CPP_REGISTER_METHOD(
        0x029D03E0,
        app::UnaryExpression*,
        GetUserDefinedUnaryOperator,
        app::ExpressionType__Enum unary_type,
        app::String* name,
        app::Expression* operand
    )
    IL2CPP_REGISTER_METHOD(
        0x029D0880,
        app::UnaryExpression*,
        GetMethodBasedUnaryOperator,
        app::ExpressionType__Enum unary_type,
        app::Expression* operand,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x029D0D80,
        app::UnaryExpression*,
        GetUserDefinedCoercionOrThrow,
        app::ExpressionType__Enum coercion_type,
        app::Expression* expression,
        app::Type* convert_to_type
    )
    IL2CPP_REGISTER_METHOD(
        0x029D0E70,
        app::UnaryExpression*,
        GetUserDefinedCoercion,
        app::ExpressionType__Enum coercion_type,
        app::Expression* expression,
        app::Type* convert_to_type
    )
    IL2CPP_REGISTER_METHOD(
        0x029D1030,
        app::UnaryExpression*,
        GetMethodBasedCoercionOperator,
        app::ExpressionType__Enum unary_type,
        app::Expression* operand,
        app::Type* convert_to_type,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(0x029D14B0, app::UnaryExpression*, Negate, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D1770, app::UnaryExpression*, UnaryPlus, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D1A00, app::UnaryExpression*, NegateChecked, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D1CC0, app::UnaryExpression*, Not, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D1F90, app::UnaryExpression*, IsFalse, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D2220, app::UnaryExpression*, IsTrue, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D24B0, app::UnaryExpression*, OnesComplement, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D2740, app::UnaryExpression*, TypeAs, app::Expression* expression, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029D2950, app::UnaryExpression*, Unbox, app::Expression* expression, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029D2BF0, app::UnaryExpression*, Convert_1, app::Expression* expression, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029D2CA0, app::UnaryExpression*, Convert_2, app::Expression* expression, app::Type* type, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D2F70, app::UnaryExpression*, ConvertChecked, app::Expression* expression, app::Type* type, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D3320, app::UnaryExpression*, ArrayLength, app::Expression* array)
    IL2CPP_REGISTER_METHOD(0x029D3610, app::UnaryExpression*, Quote, app::Expression* expression)
    IL2CPP_REGISTER_METHOD(0x029D3810, app::UnaryExpression*, Throw, app::Expression* value, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x029D3A20, app::UnaryExpression*, Increment, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D3CB0, app::UnaryExpression*, Decrement, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D3F40, app::UnaryExpression*, PreIncrementAssign_1, app::Expression* expression)
    IL2CPP_REGISTER_METHOD(0x029D3FE0, app::UnaryExpression*, PreIncrementAssign_2, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D4090, app::UnaryExpression*, PreDecrementAssign, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D4140, app::UnaryExpression*, PostIncrementAssign, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x029D41F0, app::UnaryExpression*, PostDecrementAssign, app::Expression* expression, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(
        0x029D42A0,
        app::UnaryExpression*,
        MakeOpAssignUnary,
        app::ExpressionType__Enum kind,
        app::Expression* expression,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(0x029D4630, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x0153CE20, app::Expression_1_System_Object_*, Lambda_6, app::Expression* body, app::ParameterExpression__Array* parameters)
    IL2CPP_REGISTER_METHOD(
        0x0153CC90,
        app::Expression_1_System_Object_*,
        Lambda_7,
        app::Expression* body,
        bool tail_call,
        app::ParameterExpression__Array* parameters
    )
    IL2CPP_REGISTER_METHOD(
        0x0153CD60,
        app::Expression_1_System_Object_*,
        Lambda_8,
        app::Expression* body,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* parameters
    )
    IL2CPP_REGISTER_METHOD(
        0x0153CBC0,
        app::Expression_1_System_Object_*,
        Lambda_9,
        app::Expression* body,
        bool tail_call,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* parameters
    )
    IL2CPP_REGISTER_METHOD(
        0x0153CEE0,
        app::Expression_1_System_Object_*,
        Lambda_10,
        app::Expression* body,
        app::String* name,
        bool tail_call,
        app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* parameters
    )
    IL2CPP_REGISTER_METHOD(
        0x0153CC90,
        app::Expression_1_DynamicInstantiationDescriptor_CountGetter_*,
        Lambda_11,
        app::Expression* body,
        bool tail_call,
        app::ParameterExpression__Array* parameters
    )
    IL2CPP_REGISTER_METHOD(
        0x0153CE20,
        app::Expression_1_DynamicInstantiationScanner_EvaluationFn_1_*,
        Lambda_12,
        app::Expression* body,
        app::ParameterExpression__Array* parameters
    )
} // namespace app::classes::System::Linq::Expressions::Expression
