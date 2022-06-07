#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::LehmerRng {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::LehmerRng * this_ptr, uint32_t seed))
    IL2CPP_REGISTER_METHOD(0x0255A5E0, uint32_t, GetNext, (app::LehmerRng * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255A620, float, GetNextFloat, (app::LehmerRng * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0255A670, float, GetFloatInRange, (app::LehmerRng * this_ptr, float min, float max))
    IL2CPP_REGISTER_METHOD(0x0255A790, uint32_t, GetInRange, (app::LehmerRng * this_ptr, uint32_t min, uint32_t max))
}
