#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OneEnergySample.h>

namespace app::classes::Moon::ArtOptimization::OneEnergySample {
    IL2CPP_REGISTER_METHOD(0x00E301C0, void, ctor, app::OneEnergySample* this_ptr)
}
