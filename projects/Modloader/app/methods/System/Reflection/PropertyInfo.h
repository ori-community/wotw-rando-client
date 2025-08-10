#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MemberTypes__Enum.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/NotImplementedException.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/RuntimePropertyHandle.h>
#include <Modloader/app/structs/RuntimeTypeHandle.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Reflection::PropertyInfo {
    IL2CPP_REGISTER_METHOD(0x007E3F10, app::MemberTypes__Enum, get_MemberType, app::PropertyInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PropertyInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02695A70, app::MethodInfo_1*, GetGetMethod, app::PropertyInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02695A90, app::MethodInfo_1*, GetSetMethod, app::PropertyInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02693FA0, app::Object*, GetValue_1, app::PropertyInfo_1* this_ptr, app::Object* obj, app::Object__Array* index)
    IL2CPP_REGISTER_METHOD(0x02695AB0, app::Object*, GetValue_2, app::PropertyInfo_1* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02695AF0, void, SetValue_1, app::PropertyInfo_1* this_ptr, app::Object* obj, app::Object* value, app::Object__Array* index)
    IL2CPP_REGISTER_METHOD(0x02695B30, void, SetValue_2, app::PropertyInfo_1* this_ptr, app::Object* obj, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02695B70, app::Type__Array*, GetOptionalCustomModifiers, app::PropertyInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02695C10, app::Type__Array*, GetRequiredCustomModifiers, app::PropertyInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02695CB0, app::NotImplementedException*, CreateNIE, )
    IL2CPP_REGISTER_METHOD(0x02695DF0, app::Object*, GetConstantValue, app::PropertyInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02695E30, app::Object*, GetRawConstantValue, app::PropertyInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, app::PropertyInfo_1* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, app::PropertyInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02283820, bool, op_Equality, app::PropertyInfo_1* left, app::PropertyInfo_1* right)
    IL2CPP_REGISTER_METHOD(0x02283870, bool, op_Inequality, app::PropertyInfo_1* left, app::PropertyInfo_1* right)
    IL2CPP_REGISTER_METHOD(0x02695E70, app::PropertyInfo_1*, internal_from_handle_type, void* event_handle, void* type_handle)
    IL2CPP_REGISTER_METHOD(0x02695ED0, app::PropertyInfo_1*, GetPropertyFromHandle, app::RuntimePropertyHandle handle, app::RuntimeTypeHandle reflected_type)
    inline bool operator==(app::PropertyInfo_1& left, app::PropertyInfo_1& right) { return op_Equality(&left, &right); }
    inline bool operator!=(app::PropertyInfo_1& left, app::PropertyInfo_1& right) { return op_Inequality(&left, &right); }
} // namespace app::classes::System::Reflection::PropertyInfo
