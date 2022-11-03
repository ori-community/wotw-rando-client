#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::IkLegPostprocess {
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (app::IkLegPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B112C0, void, Awake, (app::IkLegPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B113B0, void, Process, (app::IkLegPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01B11D70, void, ctor, (app::IkLegPostprocess * this_ptr))
} // namespace app::classes::Moon::IkLegPostprocess
