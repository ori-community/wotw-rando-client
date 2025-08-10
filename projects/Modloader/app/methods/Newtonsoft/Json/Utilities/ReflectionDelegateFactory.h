#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Object_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/ReflectionDelegateFactory.h>

namespace app::classes::Newtonsoft::Json::Utilities::ReflectionDelegateFactory {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ReflectionDelegateFactory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02653CC0, app::Func_2_Object_Object_*, CreateGet_1, app::ReflectionDelegateFactory* this_ptr, app::MemberInfo_1* member_info)
    IL2CPP_REGISTER_METHOD(0x018F1C90, app::Action_2_Object_Object_*, CreateSet_1, app::ReflectionDelegateFactory* this_ptr, app::MemberInfo_1* member_info)
} // namespace app::classes::Newtonsoft::Json::Utilities::ReflectionDelegateFactory
