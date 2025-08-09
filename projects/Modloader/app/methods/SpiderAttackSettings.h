#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiderAttackSettings.h>

namespace app::classes::SpiderAttackSettings {
    IL2CPP_REGISTER_METHOD(0x005150C0, bool, IsSpecialAttack, app::SpiderAttackSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00953E60, void, ctor, app::SpiderAttackSettings* this_ptr)
} // namespace app::classes::SpiderAttackSettings
