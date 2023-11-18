#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationEntry.h>

namespace app::classes::AnimationEntry {
    IL2CPP_REGISTER_METHOD(0x004FC8F0, void, ctor, (app::AnimationEntry * this_ptr))
}
