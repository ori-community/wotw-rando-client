#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DeathInformation {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::DeathInformation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDE2F0, void, ctor_2, (app::DeathInformation * this_ptr, app::Vector3 position, int32_t time_of_death, int32_t progress, int32_t death_number))
    IL2CPP_REGISTER_METHOD(0x00DDE310, void, Serialize, (app::DeathInformation * this_ptr, app::Archive * ar))
}
