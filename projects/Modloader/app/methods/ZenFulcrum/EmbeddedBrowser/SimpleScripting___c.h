#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SimpleScripting_c.h>
#include <Modloader/app/structs/JSONNode.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::SimpleScripting___c {
    IL2CPP_REGISTER_METHOD(0x0166C800, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SimpleScripting_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0166C940, void, _Start_b__1_0, (app::SimpleScripting_c * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _GetUsername_b__2_0, (app::SimpleScripting_c * this_ptr, app::JSONNode* username))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::SimpleScripting___c
