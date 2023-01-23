#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/Action_2_Object_Object_.h>
#include <Modloader/app/structs/Action_3_Object_Object_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/Func_3_Object_Object_Object_.h>
#include <Modloader/app/structs/Func_4_Object_Object_Object_Object_.h>

namespace app::classes::Moon::ReflectionHelpers {
    IL2CPP_REGISTER_METHOD(0x018F11E0, app::Action_1_Object_*, CreateReflectedStaticFuncDelegate_1, (app::Type * type, app::String* method_name, app::BindingFlags__Enum binding_flags))
    IL2CPP_REGISTER_METHOD(0x018F1E10, app::Action_2_Object_Object_*, CreateReflectedStaticFuncDelegate_2, (app::Type * type, app::String* method_name, app::BindingFlags__Enum binding_flags))
    IL2CPP_REGISTER_METHOD(0x018F2060, app::Action_3_Object_Object_Object_*, CreateReflectedStaticFuncDelegate_3, (app::Type * type, app::String* method_name, app::BindingFlags__Enum binding_flags))
    IL2CPP_REGISTER_METHOD(0x02653060, app::Func_2_Object_Object_*, CreateReflectedStaticFuncDelegateWithReturn_1, (app::Type * type, app::String* method_name, app::BindingFlags__Enum binding_flags))
    IL2CPP_REGISTER_METHOD(0x02654310, app::Func_3_Object_Object_Object_*, CreateReflectedStaticFuncDelegateWithReturn_2, (app::Type * type, app::String* method_name, app::BindingFlags__Enum binding_flags))
    IL2CPP_REGISTER_METHOD(0x02654560, app::Func_4_Object_Object_Object_Object_*, CreateReflectedStaticFuncDelegateWithReturn_3, (app::Type * type, app::String* method_name, app::BindingFlags__Enum binding_flags))
} // namespace app::classes::Moon::ReflectionHelpers
