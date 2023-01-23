#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/DebugHubItem.h>
#include <Modloader/app/structs/Input_Button__Enum.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/DebugHubItem_DebugHubItemLayout.h>

namespace app::classes::DebugHubItem {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::DebugHubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::DebugHubItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::Input_Button__Enum, get_ButtonBinding, (app::DebugHubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_ButtonBinding, (app::DebugHubItem * this_ptr, app::Input_Button__Enum value))
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_IsModal, (app::DebugHubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_IsModal, (app::DebugHubItem * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Action*, get_ToggleAction, (app::DebugHubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ToggleAction, (app::DebugHubItem * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Func_1_Boolean_*, get_IsActiveFunc, (app::DebugHubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_IsActiveFunc, (app::DebugHubItem * this_ptr, app::Func_1_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x00DED630, app::DebugHubItem_DebugHubItemLayout, get_Layout, (app::DebugHubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DED650, void, set_Layout, (app::DebugHubItem * this_ptr, app::DebugHubItem_DebugHubItemLayout value))
    IL2CPP_REGISTER_METHOD(0x00DED650, void, UpdateLayout, (app::DebugHubItem * this_ptr, app::DebugHubItem_DebugHubItemLayout layout))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DebugHubItem * this_ptr))
} // namespace app::classes::DebugHubItem
