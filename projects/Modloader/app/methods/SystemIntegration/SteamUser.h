#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SteamUser.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::SystemIntegration::SteamUser {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Texture2D*, get_Image, app::SteamUser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Image, app::SteamUser* this_ptr, app::Texture2D* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_GamerTag, app::SteamUser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_GamerTag, app::SteamUser* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Uid, app::SteamUser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Uid, app::SteamUser* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0052B0A0, app::String*, get_SignInPrefix, app::SteamUser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SteamUser* this_ptr)
} // namespace app::classes::SystemIntegration::SteamUser
