#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ShowStoryTextAction {
    IL2CPP_REGISTER_METHOD(0x00737F30, void, Perform, (app::ShowStoryTextAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x007383C0, void, OnMessageScreenHide, (app::ShowStoryTextAction * this_ptr, app::MessageBox_HideAction__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x04723DC8, ShowStoryTextAction_OnMessageScreenHide__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::ShowStoryTextAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007385F0, bool, get_IsPerforming, (app::ShowStoryTextAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowStoryTextAction * this_ptr))
}
