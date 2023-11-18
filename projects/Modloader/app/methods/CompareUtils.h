#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompareMethod__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::CompareUtils {
    IL2CPP_REGISTER_METHOD(0x025528A0, bool, Compare_1, (float a, float b, app::CompareMethod__Enum cm, float floating_point))
    IL2CPP_REGISTER_METHOD(0x025529B0, bool, Compare_2, (int32_t a, int32_t b, app::CompareMethod__Enum cm))
    IL2CPP_REGISTER_METHOD(0x025529F0, app::String*, GetCompareString, (app::CompareMethod__Enum cm))
} // namespace app::classes::CompareUtils
