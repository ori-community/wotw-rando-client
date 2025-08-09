#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity_c.h>

namespace app::classes::PetrifiedOwlBossEntity___c {
    IL2CPP_REGISTER_METHOD(0x017611C0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PetrifiedOwlBossEntity_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__285_0, app::PetrifiedOwlBossEntity_c* this_ptr, app::DamageResult _p0_)
} // namespace app::classes::PetrifiedOwlBossEntity___c
