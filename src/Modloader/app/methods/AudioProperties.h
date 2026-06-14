#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioProperties.h>

namespace app::classes::AudioProperties {
    IL2CPP_REGISTER_METHOD(0x00858E20, void, ctor, app::AudioProperties* this_ptr)
}
