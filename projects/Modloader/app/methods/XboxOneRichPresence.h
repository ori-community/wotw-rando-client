#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XboxOneRichPresence_RichPresence__Enum.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XboxOneRichPresence_Level__Enum.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/XboxOneRichPresence.h>

namespace app::classes::XboxOneRichPresence {
    IL2CPP_REGISTER_METHOD(0x01C591D0, bool, get_EnableRichPresence, ())
    IL2CPP_REGISTER_METHOD(0x01C59270, void, set_EnableRichPresence, (bool value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, SetPresence_1, (app::XboxOneRichPresence_RichPresence__Enum presence, app::Action* success, app::Action* failure))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, SetPresence_2, (int32_t user_id, app::XboxOneRichPresence_RichPresence__Enum presence, app::Action* success, app::Action* failure))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateRichPresence, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, SendLevelStart, (app::String * area))
    IL2CPP_REGISTER_METHOD(0x01C59320, app::XboxOneRichPresence_Level__Enum, MapAreaNameToLevel, (app::String * area_name))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateAllRichPresenceStrings, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendGameProgress, (app::String * user_id, app::Guid player_session_id, float completion_percent))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XboxOneRichPresence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C59740, void, cctor, ())
} // namespace app::classes::XboxOneRichPresence
