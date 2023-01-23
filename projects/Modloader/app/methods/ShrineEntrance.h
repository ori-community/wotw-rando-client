#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShrineEntrance.h>

namespace app::classes::ShrineEntrance {
    IL2CPP_REGISTER_METHOD(0x0073DAB0, void, Highlight, (app::ShrineEntrance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073DCA0, void, Unhighlight, (app::ShrineEntrance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073DDD0, void, FixedUpdate, (app::ShrineEntrance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073DEA0, void, ctor, (app::ShrineEntrance * this_ptr))
} // namespace app::classes::ShrineEntrance
