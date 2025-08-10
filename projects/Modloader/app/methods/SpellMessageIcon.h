#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SpellMessageIcon.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::SpellMessageIcon {
    IL2CPP_REGISTER_METHOD(0x00943010, void, SetIcon, app::SpellMessageIcon* this_ptr, app::Texture2D* icon)
    IL2CPP_REGISTER_METHOD(0x009430C0, void, SetName, app::SpellMessageIcon* this_ptr, app::MessageProvider* name)
    IL2CPP_REGISTER_METHOD(0x00943180, void, SetSubText, app::SpellMessageIcon* this_ptr, bool is_passive)
    IL2CPP_REGISTER_METHOD(0x00943250, void, SetDescription, app::SpellMessageIcon* this_ptr, app::MessageProvider* description)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SpellMessageIcon* this_ptr)
} // namespace app::classes::SpellMessageIcon
