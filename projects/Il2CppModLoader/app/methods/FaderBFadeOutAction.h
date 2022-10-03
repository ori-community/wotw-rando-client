#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FaderBFadeOutAction {
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Duration, (app::FaderBFadeOutAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Duration, (app::FaderBFadeOutAction * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00993F90, void, Perform, (app::FaderBFadeOutAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009940A0, void, Stop, (app::FaderBFadeOutAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04721190, FaderBFadeOutAction_Stop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009940F0, bool, get_IsPerforming, (app::FaderBFadeOutAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009941B0, app::String*, GetNiceName, (app::FaderBFadeOutAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00993F70, void, ctor, (app::FaderBFadeOutAction * this_ptr))
} // namespace app::classes::FaderBFadeOutAction
