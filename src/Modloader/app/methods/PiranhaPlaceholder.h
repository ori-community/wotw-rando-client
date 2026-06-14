#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PiranhaPlaceholder.h>

namespace app::classes::PiranhaPlaceholder {
    IL2CPP_REGISTER_METHOD(0x01164A80, void, ctor, app::PiranhaPlaceholder* this_ptr)
}
