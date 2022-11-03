#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::LambdaExpression {
    IL2CPP_REGISTER_METHOD(0x024172C0, void, ctor, (app::LambdaExpression * this_ptr, app::Expression* body))
    IL2CPP_REGISTER_METHOD(0x0060EEC0, app::Type*, get_Type, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D980, app::ExpressionType__Enum, get_NodeType, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02417370, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*, get_Parameters, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112C0A0, app::String*, get_Name, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_NameCore, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Expression*, get_Body, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02417390, app::Type*, get_ReturnType, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C4E70, bool, get_TailCall, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_TailCallCore, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024173E0, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*, GetOrMakeParameters, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C078, LambdaExpression_GetOrMakeParameters__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02417420, app::ParameterExpression*, IParameterProvider_GetParameter, (app::LambdaExpression * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02417440, app::ParameterExpression*, GetParameter, (app::LambdaExpression * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04731158, LambdaExpression_GetParameter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E113B0, int32_t, IParameterProvider_get_ParameterCount, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02417480, int32_t, get_ParameterCount, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04730D80, LambdaExpression_get_ParameterCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024174C0, app::Delegate*, Compile_1, (app::LambdaExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024174D0, app::Delegate*, Compile_2, (app::LambdaExpression * this_ptr, bool prefer_interpretation))
    IL2CPP_REGISTER_METHOD(0x024174C0, app::Delegate*, Compile_3, (app::LambdaExpression * this_ptr, app::DebugInfoGenerator* debug_info_generator))
} // namespace app::classes::System::Linq::Expressions::LambdaExpression
