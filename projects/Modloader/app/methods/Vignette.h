#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vignette.h>

namespace app::classes::Vignette {
    IL2CPP_REGISTER_METHOD(0x008C1900, void, Awake, (app::Vignette * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Vignette * this_ptr))
} // namespace app::classes::Vignette
