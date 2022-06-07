#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZExpandBlendModes {
    IL2CPP_REGISTER_METHOD(0x01C5FD70, bool, CanHaveZExpand, (app::BlendModeType__Enum blend_type))
}
