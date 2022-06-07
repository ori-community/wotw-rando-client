#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CaptureAgentUtils {
    IL2CPP_REGISTER_METHOD(0x00B256A0, app::String *, GetStringForMSValue, (double ms))
    IL2CPP_REGISTER_METHOD(0x00B258A0, void, cctor, ())
}
