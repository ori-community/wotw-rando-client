#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ExtractedIntFromInt64 {
    IL2CPP_REGISTER_METHOD(0x00988420, void, ctor, (app::ExtractedIntFromInt64 * this_ptr, int32_t bits))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Bits, (app::ExtractedIntFromInt64 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00988420, void, set_Bits, (app::ExtractedIntFromInt64 * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Value, (app::ExtractedIntFromInt64 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00988440, void, set_Value, (app::ExtractedIntFromInt64 * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00988510, int32_t, get_MaxValue, (app::ExtractedIntFromInt64 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00988510, int32_t, get_Mask, (app::ExtractedIntFromInt64 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00988520, void, Encode, (app::ExtractedIntFromInt64 * this_ptr, int32_t * data))
    IL2CPP_REGISTER_METHOD(0x00988540, void, Decode, (app::ExtractedIntFromInt64 * this_ptr, int32_t * data))
    IL2CPP_REGISTER_METHOD(0x00988570, bool, Validate, (app::ExtractedIntFromInt64 * this_ptr))
}
