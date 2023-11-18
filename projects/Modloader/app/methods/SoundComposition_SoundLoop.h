#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundComposition_SoundLoop.h>

namespace app::classes::SoundComposition_SoundLoop {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SoundComposition_SoundLoop * this_ptr))
}
