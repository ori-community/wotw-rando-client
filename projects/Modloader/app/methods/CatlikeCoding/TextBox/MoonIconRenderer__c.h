#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonIconRenderer_c.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonIconRenderer_IconObject.h>

namespace app::classes::CatlikeCoding::TextBox::MoonIconRenderer___c {
    IL2CPP_REGISTER_METHOD(0x01030550, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonIconRenderer_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01030690, bool, _Apply_b__9_0, (app::MoonIconRenderer_c * this_ptr, app::GameObject* a))
    IL2CPP_REGISTER_METHODINFO(0x04739208, MoonIconRenderer_c__Apply_b__9_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01030730, bool, _Apply_b__9_1, (app::MoonIconRenderer_c * this_ptr, app::MoonIconRenderer_IconObject a))
    IL2CPP_REGISTER_METHODINFO(0x047713B0, MoonIconRenderer_c__Apply_b__9_1__MethodInfo)
} // namespace app::classes::CatlikeCoding::TextBox::MoonIconRenderer___c
