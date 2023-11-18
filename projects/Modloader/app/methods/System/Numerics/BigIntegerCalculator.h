#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UInt32__Array.h>

namespace app::classes::System::Numerics::BigIntegerCalculator {
    IL2CPP_REGISTER_METHOD(0x030FE440, app::UInt32__Array*, Add_1, (app::UInt32__Array * left, uint32_t right))
    IL2CPP_REGISTER_METHOD(0x030FE5B0, app::UInt32__Array*, Add_2, (app::UInt32__Array * left, app::UInt32__Array* right))
    IL2CPP_REGISTER_METHOD(0x030FE710, void, Add_3, (uint32_t * left, int32_t left_length, uint32_t* right, int32_t right_length, uint32_t* bits, int32_t bits_length))
    IL2CPP_REGISTER_METHOD(0x030FE7D0, void, AddSelf, (uint32_t * left, int32_t left_length, uint32_t* right, int32_t right_length))
    IL2CPP_REGISTER_METHOD(0x030FE840, app::UInt32__Array*, Subtract_1, (app::UInt32__Array * left, uint32_t right))
    IL2CPP_REGISTER_METHOD(0x030FE980, app::UInt32__Array*, Subtract_2, (app::UInt32__Array * left, app::UInt32__Array* right))
    IL2CPP_REGISTER_METHOD(0x030FEB30, void, Subtract_3, (uint32_t * left, int32_t left_length, uint32_t* right, int32_t right_length, uint32_t* bits, int32_t bits_length))
    IL2CPP_REGISTER_METHOD(0x030FEBE0, int32_t, Compare, (app::UInt32__Array * left, app::UInt32__Array* right))
    IL2CPP_REGISTER_METHOD(0x030FEC80, app::UInt32__Array*, Square_1, (app::UInt32__Array * value))
    IL2CPP_REGISTER_METHOD(0x030FEDA0, void, Square_2, (uint32_t * value, int32_t value_length, uint32_t* bits, int32_t bits_length))
    IL2CPP_REGISTER_METHOD(0x030FF250, app::UInt32__Array*, Multiply_1, (app::UInt32__Array * left, uint32_t right))
    IL2CPP_REGISTER_METHOD(0x030FF390, app::UInt32__Array*, Multiply_2, (app::UInt32__Array * left, app::UInt32__Array* right))
    IL2CPP_REGISTER_METHOD(0x030FF4F0, void, Multiply_3, (uint32_t * left, int32_t left_length, uint32_t* right, int32_t right_length, uint32_t* bits, int32_t bits_length))
    IL2CPP_REGISTER_METHOD(0x030FFAA0, void, SubtractCore, (uint32_t * left, int32_t left_length, uint32_t* right, int32_t right_length, uint32_t* core, int32_t core_length))
    IL2CPP_REGISTER_METHOD(0x030FFBA0, void, cctor, ())
} // namespace app::classes::System::Numerics::BigIntegerCalculator
