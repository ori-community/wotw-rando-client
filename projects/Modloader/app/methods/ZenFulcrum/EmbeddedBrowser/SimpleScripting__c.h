#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SimpleScripting_c.h>
#include <Modloader/app/structs/JSONNode.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::SimpleScripting___c {
    IL2CPP_REGISTER_METHOD(0x0166C800, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SimpleScripting_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0166C940, void, _Start_b__1_0, (app::SimpleScripting_c * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHODINFO(0x04731F98, SimpleScripting_c__Start_b__1_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _GetUsername_b__2_0, (app::SimpleScripting_c * this_ptr, app::JSONNode* username))
    IL2CPP_REGISTER_METHODINFO(0x047022A0, SimpleScripting_c__GetUsername_b__2_0__MethodInfo)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::SimpleScripting___c
