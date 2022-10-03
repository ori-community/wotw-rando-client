#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Globalization::Bootstring {
    IL2CPP_REGISTER_METHOD(0x01A1D930, void, ctor, (app::Bootstring * this_ptr, uint16_t delimiter, int32_t base_num, int32_t tmin, int32_t tmax, int32_t skew, int32_t damp, int32_t initial_bias, int32_t initial_n))
    IL2CPP_REGISTER_METHOD(0x01A1D960, app::String*, Encode, (app::Bootstring * this_ptr, app::String* s, int32_t offset))
    IL2CPP_REGISTER_METHODINFO(0x04785038, Bootstring_Encode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A1DF90, uint16_t, EncodeDigit, (app::Bootstring * this_ptr, int32_t d))
    IL2CPP_REGISTER_METHOD(0x01A1DFB0, int32_t, DecodeDigit, (app::Bootstring * this_ptr, uint16_t c))
    IL2CPP_REGISTER_METHOD(0x01A1DFE0, int32_t, Adapt, (app::Bootstring * this_ptr, int32_t delta, int32_t num_points, bool first_time))
    IL2CPP_REGISTER_METHOD(0x01A1E050, app::String*, Decode, (app::Bootstring * this_ptr, app::String* s, int32_t offset))
    IL2CPP_REGISTER_METHODINFO(0x0471BEE0, Bootstring_Decode__MethodInfo)
} // namespace app::classes::System::Globalization::Bootstring
