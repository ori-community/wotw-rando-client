#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ColorVariation_c.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::ColorVariation___c {
    IL2CPP_REGISTER_METHOD(0x011D8C70, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ColorVariation_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011D8DB0, int32_t, _CacheRenderers_b__13_0, app::ColorVariation_c* this_ptr, app::Transform* x, app::Transform* y)
} // namespace app::classes::ColorVariation___c
