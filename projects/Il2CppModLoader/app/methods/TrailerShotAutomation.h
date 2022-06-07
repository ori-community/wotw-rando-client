#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TrailerShotAutomation {
    IL2CPP_REGISTER_METHOD(0x00B032A0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00B033E0, bool, get_ForceScreendump, ())
    IL2CPP_REGISTER_METHOD(0x00B03480, void, set_ForceScreendump, (bool value))
    IL2CPP_REGISTER_METHOD(0x00B035B0, void, Initialise, (app::String * replay_path, bool enable_shots))
    IL2CPP_REGISTER_METHOD(0x00B038E0, void, OnRecorderAwake, ())
    IL2CPP_REGISTER_METHODINFO(0x047549D8, TrailerShotAutomation_OnRecorderAwake__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B03F10, void, Start, ())
    IL2CPP_REGISTER_METHOD(0x00B03FD0, void, OnPlayCycle, ())
    IL2CPP_REGISTER_METHODINFO(0x04723258, TrailerShotAutomation_OnPlayCycle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B044B0, void, CustomScreenCapture, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x00B047F0, void, OnFinishedShot, ())
    IL2CPP_REGISTER_METHODINFO(0x04744780, TrailerShotAutomation_OnFinishedShot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B04C00, void, FinishedTimeline, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OutputVideoFromShots, (app::String * screendump_path))
    IL2CPP_REGISTER_METHOD(0x00B04C90, void, PerformShot, ())
    IL2CPP_REGISTER_METHOD(0x00B051C0, void, StartPlayback, ())
    IL2CPP_REGISTER_METHOD(0x00B05310, app::TrailerShot *, get_GetCurrentShot, ())
    IL2CPP_REGISTER_METHOD(0x00B05440, app::TrailerShot *, NextShot, ())
    IL2CPP_REGISTER_METHOD(0x00B054F0, void, LoadShots, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TrailerShotAutomation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B05680, void, cctor, ())
}
