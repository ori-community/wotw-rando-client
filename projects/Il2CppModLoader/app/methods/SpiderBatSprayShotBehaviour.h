#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiderBatSprayShotBehaviour {
    IL2CPP_REGISTER_METHOD(0x00961CF0, void, Shoot, (app::SpiderBatSprayShotBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00961E00, void, CalculateSpreadShot, (app::SpiderBatSprayShotBehaviour * this_ptr, int32_t projectile_num))
    IL2CPP_REGISTER_METHOD(0x00961C50, void, ctor, (app::SpiderBatSprayShotBehaviour * this_ptr))
}
