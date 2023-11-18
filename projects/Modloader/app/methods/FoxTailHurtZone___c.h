#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FoxTailHurtZone_c.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::FoxTailHurtZone___c {
    IL2CPP_REGISTER_METHOD(0x01634330, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FoxTailHurtZone_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__4_0, (app::FoxTailHurtZone_c * this_ptr, app::Damage* _p0_))
} // namespace app::classes::FoxTailHurtZone___c
