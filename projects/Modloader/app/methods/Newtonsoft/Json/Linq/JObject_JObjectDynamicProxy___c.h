#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JObject_JObjectDynamicProxy_c.h>
#include <Modloader/app/structs/JProperty.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Linq::JObject_JObjectDynamicProxy___c {
    IL2CPP_REGISTER_METHOD(0x01F0CE70, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JObject_JObjectDynamicProxy_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F0CFB0, app::String*, _GetDynamicMemberNames_b__2_0, (app::JObject_JObjectDynamicProxy_c * this_ptr, app::JProperty* p))
} // namespace app::classes::Newtonsoft::Json::Linq::JObject_JObjectDynamicProxy___c
