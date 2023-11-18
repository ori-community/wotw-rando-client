#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Door_1.h>
#include <Modloader/app/structs/Action_1_ZenFulcrum_EmbeddedBrowser_Door_OpenState_.h>
#include <Modloader/app/structs/Door_OpenState__Enum.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Door {
    IL2CPP_REGISTER_METHOD(0x01DD5AC0, void, add_stateChange, (app::Door_1 * this_ptr, app::Action_1_ZenFulcrum_EmbeddedBrowser_Door_OpenState_* value))
    IL2CPP_REGISTER_METHOD(0x01DD5BB0, void, remove_stateChange, (app::Door_1 * this_ptr, app::Action_1_ZenFulcrum_EmbeddedBrowser_Door_OpenState_* value))
    IL2CPP_REGISTER_METHOD(0x003FF610, app::Door_OpenState__Enum, get_State, (app::Door_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD5CA0, void, set_State, (app::Door_1 * this_ptr, app::Door_OpenState__Enum value))
    IL2CPP_REGISTER_METHOD(0x01DD5D40, void, Start, (app::Door_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD6350, void, Toggle, (app::Door_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD6370, void, Open, (app::Door_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD6420, void, Close, (app::Door_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD64D0, void, Update, (app::Door_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD6A70, void, ctor, (app::Door_1 * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Door
