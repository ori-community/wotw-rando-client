#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Serialization::DynamicValueProvider {
    IL2CPP_REGISTER_METHOD(0x0186B8F0, void, ctor, (app::DynamicValueProvider * this_ptr, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHOD(0x0186B990, void, SetValue, (app::DynamicValueProvider * this_ptr, app::Object* target, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04724658, DynamicValueProvider_SetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0186BB50, app::Object*, GetValue, (app::DynamicValueProvider * this_ptr, app::Object* target))
    IL2CPP_REGISTER_METHODINFO(0x04798958, DynamicValueProvider_GetValue__MethodInfo)
} // namespace app::classes::Newtonsoft::Json::Serialization::DynamicValueProvider
