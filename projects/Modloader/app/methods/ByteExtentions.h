#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ByteExtentions {
    IL2CPP_REGISTER_METHOD(0x02551CF0, bool, GetBit, (uint8_t b, int32_t bit_index))
    IL2CPP_REGISTER_METHOD(0x02551DC0, uint8_t, SetBit, (uint8_t b, int32_t bit_index, bool value))
    IL2CPP_REGISTER_METHOD(0x02551EB0, uint8_t, ToogleBit, (uint8_t b, int32_t bit_index))
} // namespace app::classes::ByteExtentions
