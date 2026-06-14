#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlendModeType__Enum.h>

namespace app::classes::ZExpandBlendModes {
    IL2CPP_REGISTER_METHOD(0x01C5FD70, bool, CanHaveZExpand, app::BlendModeType__Enum blend_type)
}
