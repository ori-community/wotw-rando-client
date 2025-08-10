#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DefaultBinder.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/FieldInfo_1__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/MethodBase__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/ParameterModifier__Array.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/PropertyInfo_1__Array.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::DefaultBinder {
    IL2CPP_REGISTER_METHOD(
        0x01737180,
        app::MethodBase*,
        BindToMethod,
        app::DefaultBinder* this_ptr,
        app::BindingFlags__Enum binding_attr,
        app::MethodBase__Array* match,
        app::Object__Array** args,
        app::ParameterModifier__Array* modifiers,
        app::CultureInfo* culture_info,
        app::String__Array* names,
        app::Object** state
    )
    IL2CPP_REGISTER_METHOD(
        0x017398D0,
        app::FieldInfo_1*,
        BindToField,
        app::DefaultBinder* this_ptr,
        app::BindingFlags__Enum binding_attr,
        app::FieldInfo_1__Array* match,
        app::Object* value,
        app::CultureInfo* culture_info
    )
    IL2CPP_REGISTER_METHOD(
        0x0173A060,
        app::MethodBase*,
        SelectMethod,
        app::DefaultBinder* this_ptr,
        app::BindingFlags__Enum binding_attr,
        app::MethodBase__Array* match,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(
        0x0173A890,
        app::PropertyInfo_1*,
        SelectProperty,
        app::DefaultBinder* this_ptr,
        app::BindingFlags__Enum binding_attr,
        app::PropertyInfo_1__Array* match,
        app::Type* return_type,
        app::Type__Array* indexes,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(
        0x0173B440,
        app::Object*,
        ChangeType,
        app::DefaultBinder* this_ptr,
        app::Object* value,
        app::Type* type,
        app::CultureInfo* culture_info
    )
    IL2CPP_REGISTER_METHOD(0x0173B4B0, void, ReorderArgumentArray, app::DefaultBinder* this_ptr, app::Object__Array** args, app::Object* state)
    IL2CPP_REGISTER_METHOD(
        0x0173B880,
        app::MethodBase*,
        ExactBinding,
        app::MethodBase__Array* match,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(
        0x0173BB60,
        app::PropertyInfo_1*,
        ExactPropertyBinding,
        app::PropertyInfo_1__Array* match,
        app::Type* return_type,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(
        0x0173BEB0,
        int32_t,
        FindMostSpecific,
        app::ParameterInfo_1__Array* p1,
        app::Int32__Array* param_order1,
        app::Type* param_array_type1,
        app::ParameterInfo_1__Array* p2,
        app::Int32__Array* param_order2,
        app::Type* param_array_type2,
        app::Type__Array* types,
        app::Object__Array* args
    )
    IL2CPP_REGISTER_METHOD(0x0173C3B0, int32_t, FindMostSpecificType, app::Type* c1, app::Type* c2, app::Type* t)
    IL2CPP_REGISTER_METHOD(
        0x0173C750,
        int32_t,
        FindMostSpecificMethod,
        app::MethodBase* m1,
        app::Int32__Array* param_order1,
        app::Type* param_array_type1,
        app::MethodBase* m2,
        app::Int32__Array* param_order2,
        app::Type* param_array_type2,
        app::Type__Array* types,
        app::Object__Array* args
    )
    IL2CPP_REGISTER_METHOD(0x0173C880, int32_t, FindMostSpecificField, app::FieldInfo_1* cur1, app::FieldInfo_1* cur2)
    IL2CPP_REGISTER_METHOD(0x0173C880, int32_t, FindMostSpecificProperty, app::PropertyInfo_1* cur1, app::PropertyInfo_1* cur2)
    IL2CPP_REGISTER_METHOD(0x0173C980, bool, CompareMethodSigAndName, app::MethodBase* m1, app::MethodBase* m2)
    IL2CPP_REGISTER_METHOD(0x0173CB40, int32_t, GetHierarchyDepth, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x0173CC10, app::MethodBase*, FindMostDerivedNewSlotMeth, app::MethodBase__Array* match, int32_t c_matches)
    IL2CPP_REGISTER_METHOD(0x0173CD70, void, ReorderParams, app::Int32__Array* param_order, app::Object__Array* vars)
    IL2CPP_REGISTER_METHOD(0x0173CF70, bool, CreateParamOrder, app::Int32__Array* param_order, app::ParameterInfo_1__Array* pars, app::String__Array* names)
    IL2CPP_REGISTER_METHOD(0x0173D260, bool, CanConvertPrimitive, app::RuntimeType* source, app::RuntimeType* target)
    IL2CPP_REGISTER_METHOD(0x0173D4E0, bool, CanConvertPrimitiveObjectToType, app::Object* source, app::RuntimeType* type)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DefaultBinder* this_ptr)
} // namespace app::classes::System::DefaultBinder
