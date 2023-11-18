#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IntExtentions {
    IL2CPP_REGISTER_METHOD(0x02557B80, bool, GetBit, (int32_t b, int32_t bit_index))
    IL2CPP_REGISTER_METHOD(0x02557C40, int32_t, SetBit, (int32_t b, int32_t bit_index, bool value))
    IL2CPP_REGISTER_METHOD(0x02557C60, int32_t, ToogleBit, (int32_t b, int32_t bit_index))
} // namespace app::classes::IntExtentions
