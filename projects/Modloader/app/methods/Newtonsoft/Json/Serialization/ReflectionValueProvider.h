#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReflectionValueProvider.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Serialization::ReflectionValueProvider {
    IL2CPP_REGISTER_METHOD(0x01BFB860, void, ctor, (app::ReflectionValueProvider * this_ptr, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHOD(0x01BFB900, void, SetValue, (app::ReflectionValueProvider * this_ptr, app::Object* target, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04710EC8, ReflectionValueProvider_SetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BFBA80, app::Object*, GetValue, (app::ReflectionValueProvider * this_ptr, app::Object* target))
    IL2CPP_REGISTER_METHODINFO(0x0478C438, ReflectionValueProvider_GetValue__MethodInfo)
} // namespace app::classes::Newtonsoft::Json::Serialization::ReflectionValueProvider
