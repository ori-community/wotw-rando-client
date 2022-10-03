#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinLaunch {
    IL2CPP_REGISTER_METHOD(0x01020FB0, void, OnSetReferenceToSein, (app::SeinLaunch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01021090, void, StartLaunch, (app::SeinLaunch * this_ptr, app::Vector3 velocity))
    IL2CPP_REGISTER_METHOD(0x010210E0, void, Hide, (app::SeinLaunch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01021110, void, Release, (app::SeinLaunch * this_ptr, app::Vector3 position, float angle, app::Vector3 velocity))
    IL2CPP_REGISTER_METHOD(0x005E1300, bool, ContinuePlayingRelease, (app::SeinLaunch * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473C198, SeinLaunch_ContinuePlayingRelease__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010219B0, void, ctor, (app::SeinLaunch * this_ptr))
} // namespace app::classes::SeinLaunch
