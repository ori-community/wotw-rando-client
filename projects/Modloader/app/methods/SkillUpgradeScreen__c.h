#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SkillUpgradeScreen_c.h>
#include <Modloader/app/structs/CleverMenuItem.h>

namespace app::classes::SkillUpgradeScreen___c {
    IL2CPP_REGISTER_METHOD(0x006BBAE0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SkillUpgradeScreen_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BBC20, bool, _FocusOnPreviousSelection_b__55_0, (app::SkillUpgradeScreen_c * this_ptr, app::CleverMenuItem* a))
    IL2CPP_REGISTER_METHODINFO(0x0478A728, SkillUpgradeScreen_c__FocusOnPreviousSelection_b__55_0__MethodInfo)
} // namespace app::classes::SkillUpgradeScreen___c
