#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/FoxHeadHurtZone_c.h>

namespace app::classes::FoxHeadHurtZone___c {
    IL2CPP_REGISTER_METHOD(0x016339E0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::FoxHeadHurtZone_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__4_0, app::FoxHeadHurtZone_c* this_ptr, app::Damage* _p0_)
} // namespace app::classes::FoxHeadHurtZone___c
