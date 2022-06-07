#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WispMessageIcon {
    IL2CPP_REGISTER_METHOD(0x0057CCD0, void, SetWisp, (app::WispMessageIcon * this_ptr, app::WispMessageIcon_Wisp__Enum wisp))
    IL2CPP_REGISTER_METHOD(0x0057CE40, void, SetIcon, (app::WispMessageIcon * this_ptr, app::Texture2D * icon))
    IL2CPP_REGISTER_METHOD(0x0057CEF0, void, SetName, (app::WispMessageIcon * this_ptr, app::MessageProvider * name))
    IL2CPP_REGISTER_METHOD(0x0057CFB0, void, SetHeader, (app::WispMessageIcon * this_ptr, app::MessageProvider * name))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WispMessageIcon * this_ptr))
}
