#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Utilities::ReflectionDelegateFactory {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReflectionDelegateFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02653CC0, app::Func_2_Object_Object_*, CreateGet_1, (app::ReflectionDelegateFactory * this_ptr, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHODINFO(0x0470C8E0, ReflectionDelegateFactory_CreateGet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F1C90, app::Action_2_Object_Object_*, CreateSet_1, (app::ReflectionDelegateFactory * this_ptr, app::MemberInfo_1* member_info))
    IL2CPP_REGISTER_METHODINFO(0x04774F98, ReflectionDelegateFactory_CreateSet__MethodInfo)
    IL2CPP_REGISTER_METHODINFO(0x04794268, ReflectionDelegateFactory_CreateMethodCall__MethodInfo)
    IL2CPP_REGISTER_METHODINFO(0x04707CE0, ReflectionDelegateFactory_CreateDefaultConstructor__MethodInfo)
    IL2CPP_REGISTER_METHODINFO(0x0476BBF0, ReflectionDelegateFactory_CreateGet_1__MethodInfo)
} // namespace app::classes::Newtonsoft::Json::Utilities::ReflectionDelegateFactory
