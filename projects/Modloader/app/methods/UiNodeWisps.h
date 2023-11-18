#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UiNodeWisps.h>

namespace app::classes::UiNodeWisps {
    IL2CPP_REGISTER_METHOD(0x012AB080, void, OnEnter, (app::UiNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012AB380, void, OnExit, (app::UiNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012AB620, void, OnMenuClose, (app::UiNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012AB630, void, ctor, (app::UiNodeWisps * this_ptr))
} // namespace app::classes::UiNodeWisps
