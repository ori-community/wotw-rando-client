#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UiNodeWisps {
    IL2CPP_REGISTER_METHOD(0x012AB080, void, OnEnter, (app::UiNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012AB380, void, OnExit, (app::UiNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012AB620, void, OnMenuClose, (app::UiNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04782358, UiNodeWisps_OnMenuClose__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012AB630, void, ctor, (app::UiNodeWisps * this_ptr))
}
