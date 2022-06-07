#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ParameterizedStrings_LowLevelStack {
    IL2CPP_REGISTER_METHOD(0x0227E470, void, ctor, (app::ParameterizedStrings_LowLevelStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0227E500, app::ParameterizedStrings_FormatParam, Pop, (app::ParameterizedStrings_LowLevelStack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471B898, ParameterizedStrings_LowLevelStack_Pop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0227E610, void, Push, (app::ParameterizedStrings_LowLevelStack * this_ptr, app::ParameterizedStrings_FormatParam item))
    IL2CPP_REGISTER_METHOD(0x0227E750, void, Clear, (app::ParameterizedStrings_LowLevelStack * this_ptr))
}
