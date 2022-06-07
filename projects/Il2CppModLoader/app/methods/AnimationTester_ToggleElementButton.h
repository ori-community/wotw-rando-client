#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AnimationTester_ToggleElementButton {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::AnimationTester_IToogleGroup *, get_ToogleGroup, (app::AnimationTester_ToggleElementButton * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ToogleGroup, (app::AnimationTester_ToggleElementButton * this_ptr, app::AnimationTester_IToogleGroup * value))
    IL2CPP_REGISTER_METHOD(0x01AFEC80, void, ctor, (app::AnimationTester_ToggleElementButton * this_ptr, app::AnimationTester_IToogleGroup * group))
    IL2CPP_REGISTER_METHOD(0x01AFF050, void, AddChildren, (app::AnimationTester_ToggleElementButton * this_ptr, app::AnimationTester_IHierarchyUiElement * children))
    IL2CPP_REGISTER_METHOD(0x01AFF0F0, void, Draw, (app::AnimationTester_ToggleElementButton * this_ptr))
}
