#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicValueProvider.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Serialization::DynamicValueProvider {
    IL2CPP_REGISTER_METHOD(0x0186B8F0, void, ctor, app::DynamicValueProvider* this_ptr, app::MemberInfo_1* member_info)
    IL2CPP_REGISTER_METHOD(0x0186B990, void, SetValue, app::DynamicValueProvider* this_ptr, app::Object* target, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0186BB50, app::Object*, GetValue, app::DynamicValueProvider* this_ptr, app::Object* target)
} // namespace app::classes::Newtonsoft::Json::Serialization::DynamicValueProvider
