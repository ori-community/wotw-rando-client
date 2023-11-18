#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/XboxOneUsers.h>
#include <Modloader/app/structs/XboxUser.h>

namespace app::classes::XboxOneUsers {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CurrentUserControllerMatch, ())
    IL2CPP_REGISTER_METHOD(0x01C5BAC0, app::Action_1_Int32_*, get_OnUserWillChange, ())
    IL2CPP_REGISTER_METHOD(0x01C5BB40, void, set_OnUserWillChange, (app::Action_1_Int32_ * value))
    IL2CPP_REGISTER_METHOD(0x01C5BBD0, app::Action*, get_OnUserChanged, ())
    IL2CPP_REGISTER_METHOD(0x01C5BC50, void, set_OnUserChanged, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x01C5BCE0, app::Action*, get_OnUserPicked, ())
    IL2CPP_REGISTER_METHOD(0x01C5BD60, void, set_OnUserPicked, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x01C5BDF0, app::Action*, get_OnUserSignedOut, ())
    IL2CPP_REGISTER_METHOD(0x01C5BE70, void, set_OnUserSignedOut, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x01C5BF00, app::Action*, get_OnLoginCancel, ())
    IL2CPP_REGISTER_METHOD(0x01C5BF80, void, set_OnLoginCancel, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanViewProfiles, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_CurrentUserHandle, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasCurrentUser, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_CurrentUserID, ())
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, get_CurrentUserLocalID, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Texture2D*, get_CurrentUserPicture, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AutoSwitchUsers, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_AutoSwitchUsers, (bool value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ResolvingUser, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ClearUserCachedData, ())
    IL2CPP_REGISTER_METHOD(0x01C5C010, bool, RequireUser, (app::Action * success, app::Action* failure))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestUser, (app::Action * success, app::Action* failure))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SignOutCurrentUser, ())
    IL2CPP_REGISTER_METHOD(0x01C5C0A0, bool, UpdateUserPicture, (app::Action * success))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShowProfileCard, (app::String * user_i_d))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InjectCurrentInto, (app::XboxUser * xbox_user))
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, GetCurrentUserId, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XboxOneUsers * this_ptr))
} // namespace app::classes::XboxOneUsers
