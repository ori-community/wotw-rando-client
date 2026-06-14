#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MantisJumpAttackSettings.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::MantisJumpAttackSettings {
    IL2CPP_REGISTER_METHOD(0x00A08990, app::Transform*, get_EffectiveLocation, app::MantisJumpAttackSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A08A50, void, Spawn, app::MantisJumpAttackSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00998550, void, ctor, app::MantisJumpAttackSettings* this_ptr)
} // namespace app::classes::MantisJumpAttackSettings
