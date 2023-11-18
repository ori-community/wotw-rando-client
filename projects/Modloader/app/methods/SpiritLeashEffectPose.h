#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritLeashEffectPose.h>

namespace app::classes::SpiritLeashEffectPose {
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::SpiritLeashEffectPose * this_ptr))
}
