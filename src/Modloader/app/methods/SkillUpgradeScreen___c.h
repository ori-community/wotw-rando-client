#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/SkillUpgradeScreen_c.h>

namespace app::classes::SkillUpgradeScreen___c {
    IL2CPP_REGISTER_METHOD(0x006BBAE0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SkillUpgradeScreen_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006BBC20, bool, _FocusOnPreviousSelection_b__55_0, app::SkillUpgradeScreen_c* this_ptr, app::CleverMenuItem* a)
} // namespace app::classes::SkillUpgradeScreen___c
