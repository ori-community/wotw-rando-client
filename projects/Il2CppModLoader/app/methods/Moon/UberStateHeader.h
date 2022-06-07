#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UberStateHeader {
    IL2CPP_REGISTER_METHOD(0x00420230, int64_t, get_Size, ())
    IL2CPP_REGISTER_METHOD(0x01B6D030, app::ValueTuple_2_Moon_UberID_Moon_UberStateHeader_UberStateType_, Read, (app::UberStateArchive * archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x01B6D200, void, Write, (app::UberStateArchive * archive, app::UberID * state_i_d, app::UberStateHeader_UberStateType__Enum type))
}
