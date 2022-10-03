#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::IntExtentions {
    IL2CPP_REGISTER_METHOD(0x02557B80, bool, GetBit, (int32_t b, int32_t bit_index))
    IL2CPP_REGISTER_METHODINFO(0x0475C8E0, IntExtentions_GetBit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02557C40, int32_t, SetBit, (int32_t b, int32_t bit_index, bool value))
    IL2CPP_REGISTER_METHOD(0x02557C60, int32_t, ToogleBit, (int32_t b, int32_t bit_index))
    IL2CPP_REGISTER_METHODINFO(0x04753A18, IntExtentions_ToogleBit__MethodInfo)
} // namespace app::classes::IntExtentions
