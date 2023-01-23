#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShowWorldMapObjectiveAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ShowWorldMapObjectiveAction {
    IL2CPP_REGISTER_METHOD(0x00739830, void, Perform, (app::ShowWorldMapObjectiveAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::ShowWorldMapObjectiveAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsPerforming, (app::ShowWorldMapObjectiveAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C15C0, void, OnFinish, (app::ShowWorldMapObjectiveAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04722B90, ShowWorldMapObjectiveAction_OnFinish__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowWorldMapObjectiveAction * this_ptr))
} // namespace app::classes::ShowWorldMapObjectiveAction
