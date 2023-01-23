#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShowTextBoxes.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ShowTextBoxes {
    IL2CPP_REGISTER_METHOD(0x007386C0, void, Perform, (app::ShowTextBoxes * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00738E50, void, OnComplete, (app::ShowTextBoxes * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779FA0, ShowTextBoxes_OnComplete__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::ShowTextBoxes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00739120, bool, get_IsPerforming, (app::ShowTextBoxes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowTextBoxes * this_ptr))
} // namespace app::classes::ShowTextBoxes
