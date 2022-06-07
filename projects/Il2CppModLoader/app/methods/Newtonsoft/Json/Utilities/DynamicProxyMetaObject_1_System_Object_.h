#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::DynamicProxyMetaObject_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D0FA30, app::Expression__Array *, get_NoArgs, ())
    IL2CPP_REGISTER_METHOD(0x01D0F010, void, ctor, (app::DynamicProxyMetaObject_1_System_Object_ * this_ptr, app::Expression * expression, app::Object * value, app::DynamicProxy_1_System_Object_ * proxy))
    IL2CPP_REGISTER_METHOD(0x01D0F130, bool, IsOverridden, (app::DynamicProxyMetaObject_1_System_Object_ * this_ptr, app::String * method_1))
    IL2CPP_REGISTER_METHOD(0x01D0F250, app::DynamicMetaObject *, BindGetMember, (app::DynamicProxyMetaObject_1_System_Object_ * this_ptr, app::GetMemberBinder * binder))
    IL2CPP_REGISTER_METHOD(0x01D0F600, app::DynamicMetaObject *, BindSetMember, (app::DynamicProxyMetaObject_1_System_Object_ * this_ptr, app::SetMemberBinder * binder, app::DynamicMetaObject * value))
    IL2CPP_REGISTER_METHOD(0x01D0FAB0, app::IEnumerable_1_System_Linq_Expressions_Expression_ *, GetArgs, (app::DynamicMetaObject__Array * args))
    IL2CPP_REGISTER_METHOD(0x01D0FE70, app::ConstantExpression *, Constant, (app::DynamicMetaObjectBinder * binder))
    IL2CPP_REGISTER_METHOD(0x01D0FF80, app::DynamicMetaObject *, CallMethodWithResult, (app::DynamicProxyMetaObject_1_System_Object_ * this_ptr, app::String * method_name, app::DynamicMetaObjectBinder * binder, app::IEnumerable_1_System_Linq_Expressions_Expression_ * args, app::DynamicProxyMetaObject_1_T_Fallback_System_Object_ * fallback, app::DynamicProxyMetaObject_1_T_Fallback_System_Object_ * fallback_invoke))
    IL2CPP_REGISTER_METHOD(0x01D10030, app::DynamicMetaObject *, BuildCallMethodWithResult, (app::DynamicProxyMetaObject_1_System_Object_ * this_ptr, app::String * method_name, app::DynamicMetaObjectBinder * binder, app::IEnumerable_1_System_Linq_Expressions_Expression_ * args, app::DynamicMetaObject * fallback_result, app::DynamicProxyMetaObject_1_T_Fallback_System_Object_ * fallback_invoke))
    IL2CPP_REGISTER_METHOD(0x01D10860, app::DynamicMetaObject *, CallMethodReturnLast, (app::DynamicProxyMetaObject_1_System_Object_ * this_ptr, app::String * method_name, app::DynamicMetaObjectBinder * binder, app::IEnumerable_1_System_Linq_Expressions_Expression_ * args, app::DynamicProxyMetaObject_1_T_Fallback_System_Object_ * fallback))
    IL2CPP_REGISTER_METHOD(0x01D10E50, app::BindingRestrictions *, GetRestrictions, (app::DynamicProxyMetaObject_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D10F60, app::IEnumerable_1_System_String_ *, GetDynamicMemberNames, (app::DynamicProxyMetaObject_1_System_Object_ * this_ptr))
}
