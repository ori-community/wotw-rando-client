#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::CaptureAgentUtils {
    IL2CPP_REGISTER_METHOD(0x00B256A0, app::String*, GetStringForMSValue, double ms)
    IL2CPP_REGISTER_METHOD(0x00B258A0, void, cctor, )
} // namespace app::classes::CaptureAgentUtils
