#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundComposition.h>

namespace app::classes::SoundComposition {
    IL2CPP_REGISTER_METHOD(0x00EE5A30, void, ctor, (app::SoundComposition * this_ptr))
}
