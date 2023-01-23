#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ILever.h>
#include <Modloader/app/structs/LegacyActionLeverSystem.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::LegacyActionLeverSystem {
    IL2CPP_REGISTER_METHOD(0x015C8CA0, app::ILever*, get_Lever, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C8BDD0, void, OnLeverEnter, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E060, LegacyActionLeverSystem_OnLeverEnter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C8BE00, void, OnLeverExit, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A0C8, LegacyActionLeverSystem_OnLeverExit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015C8D40, void, OnGrabLever, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476E9A8, LegacyActionLeverSystem_OnGrabLever__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B6FC50, void, OnReleaseLever, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793978, LegacyActionLeverSystem_OnReleaseLever__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015C8D70, void, OnLeverLeft, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473E458, LegacyActionLeverSystem_OnLeverLeft__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015C8EA0, void, OnLeverRight, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04701298, LegacyActionLeverSystem_OnLeverRight__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00D123E0, void, OnLeverLeftFailed, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724680, LegacyActionLeverSystem_OnLeverLeftFailed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015C8FD0, void, OnLeverRightFailed, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724C00, LegacyActionLeverSystem_OnLeverRightFailed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015C9000, void, OnLeftMiddle, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04713EB8, LegacyActionLeverSystem_OnLeftMiddle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015C9030, bool, CanLeverLeftCallback, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047130B0, LegacyActionLeverSystem_CanLeverLeftCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015C9060, bool, CanLeverRightCallback, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478B250, LegacyActionLeverSystem_CanLeverRightCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015C9090, void, Awake, (app::LegacyActionLeverSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C9EC0, app::IDesiredUberState*, GetRequirementsForTimeline, (app::LegacyActionLeverSystem * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LegacyActionLeverSystem * this_ptr))
} // namespace app::classes::LegacyActionLeverSystem
