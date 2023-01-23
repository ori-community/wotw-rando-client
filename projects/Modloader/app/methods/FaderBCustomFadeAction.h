#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FaderBCustomFadeAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::FaderBCustomFadeAction {
    IL2CPP_REGISTER_METHOD(0x00993A70, float, get_Duration, (app::FaderBCustomFadeAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00993A80, void, set_Duration, (app::FaderBCustomFadeAction * this_ptr, float value))
    IL2CPP_REGISTER_METHODINFO(0x047213B0, FaderBCustomFadeAction_set_Duration__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00993AE0, void, Perform, (app::FaderBCustomFadeAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00993BC0, void, Stop, (app::FaderBCustomFadeAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471F1D0, FaderBCustomFadeAction_Stop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00993C10, bool, get_IsPerforming, (app::FaderBCustomFadeAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047730B0, FaderBCustomFadeAction_get_IsPerforming__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00993C60, void, ctor, (app::FaderBCustomFadeAction * this_ptr))
} // namespace app::classes::FaderBCustomFadeAction
