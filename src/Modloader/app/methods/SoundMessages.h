#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundMessages.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SoundMessages {
    IL2CPP_REGISTER_METHOD(0x00EEB110, void, ShowMessage, app::String* name)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SoundMessages* this_ptr)
} // namespace app::classes::SoundMessages
