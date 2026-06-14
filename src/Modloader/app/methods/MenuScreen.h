#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MenuScreen.h>

namespace app::classes::MenuScreen {
    IL2CPP_REGISTER_METHOD(0x009DA4E0, void, PlaySoundEvent, app::MenuScreen* this_ptr, app::Event_1* sound_event)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::MenuScreen* this_ptr)
} // namespace app::classes::MenuScreen
