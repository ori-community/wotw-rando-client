#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::VerletStructureAnimationPostprocess {
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (app::VerletStructureAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118D2F0, void, Process, (app::VerletStructureAnimationPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::VerletStructureAnimationPostprocess * this_ptr))
} // namespace app::classes::Moon::VerletStructureAnimationPostprocess
