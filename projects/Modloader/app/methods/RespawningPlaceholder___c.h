#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/RespawningPlaceholder_c.h>

namespace app::classes::RespawningPlaceholder___c {
    IL2CPP_REGISTER_METHOD(0x0090A870, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RespawningPlaceholder_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__53_0, app::RespawningPlaceholder_c* this_ptr, app::Damage* _p0_)
} // namespace app::classes::RespawningPlaceholder___c
