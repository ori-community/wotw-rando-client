#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::ContinuousIntegration::TeamCityHelper {
    IL2CPP_REGISTER_METHOD(0x0318E6A0, app::String*, GetAndValidateNonCriticalEnvironmentVariable, (app::String * setting))
    IL2CPP_REGISTER_METHOD(0x0318E7A0, app::String*, GetAndValidateEnvironmentVariable, (app::String * setting))
    IL2CPP_REGISTER_METHOD(0x0318E910, void, FailExitIfTeamCity, (app::String * message))
    IL2CPP_REGISTER_METHOD(0x0318EA30, bool, SetBoolArgument, (app::String * arg_name, bool* value))
    IL2CPP_REGISTER_METHODINFO(0x04790E08, TeamCityHelper_SetBoolArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::Moon::ContinuousIntegration::TeamCityHelper
