#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SoundMessage.h>

namespace app::classes::SoundMessage {
    IL2CPP_REGISTER_METHOD(0x00EEABF0, void, OnGUI, app::SoundMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEACE0, void, GUIDrawRect, app::Rect position, app::Color color)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SoundMessage* this_ptr)
} // namespace app::classes::SoundMessage
