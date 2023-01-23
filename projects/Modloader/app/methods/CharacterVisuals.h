#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharacterVisuals.h>

namespace app::classes::CharacterVisuals {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CharacterVisuals * this_ptr))
}
