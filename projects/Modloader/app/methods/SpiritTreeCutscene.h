#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritTreeCutscene.h>

namespace app::classes::SpiritTreeCutscene {
    IL2CPP_REGISTER_METHOD(0x00D7BDE0, void, Start, app::SpiritTreeCutscene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SpiritTreeCutscene* this_ptr)
} // namespace app::classes::SpiritTreeCutscene
