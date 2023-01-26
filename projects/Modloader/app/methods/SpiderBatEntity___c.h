#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiderBatEntity_c.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::SpiderBatEntity___c {
    IL2CPP_REGISTER_METHOD(0x0095B730, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SpiderBatEntity_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__72_0, (app::SpiderBatEntity_c * this_ptr, app::Damage* _p0_))
} // namespace app::classes::SpiderBatEntity___c
