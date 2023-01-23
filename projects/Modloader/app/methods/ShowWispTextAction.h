#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShowWispTextAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>

namespace app::classes::ShowWispTextAction {
    IL2CPP_REGISTER_METHOD(0x00739260, void, Perform, (app::ShowWispTextAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00739510, void, OnFinishedReading, (app::ShowWispTextAction * this_ptr, app::MessageBox_HideAction__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x04783608, ShowWispTextAction_OnFinishedReading__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::ShowWispTextAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007396E0, bool, get_IsPerforming, (app::ShowWispTextAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowWispTextAction * this_ptr))
} // namespace app::classes::ShowWispTextAction
