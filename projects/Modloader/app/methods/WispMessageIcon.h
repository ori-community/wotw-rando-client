#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/WispMessageIcon.h>
#include <Modloader/app/structs/WispMessageIcon_Wisp__Enum.h>

namespace app::classes::WispMessageIcon {
    IL2CPP_REGISTER_METHOD(0x0057CCD0, void, SetWisp, app::WispMessageIcon* this_ptr, app::WispMessageIcon_Wisp__Enum wisp)
    IL2CPP_REGISTER_METHOD(0x0057CE40, void, SetIcon, app::WispMessageIcon* this_ptr, app::Texture2D* icon)
    IL2CPP_REGISTER_METHOD(0x0057CEF0, void, SetName, app::WispMessageIcon* this_ptr, app::MessageProvider* name)
    IL2CPP_REGISTER_METHOD(0x0057CFB0, void, SetHeader, app::WispMessageIcon* this_ptr, app::MessageProvider* name)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::WispMessageIcon* this_ptr)
} // namespace app::classes::WispMessageIcon
