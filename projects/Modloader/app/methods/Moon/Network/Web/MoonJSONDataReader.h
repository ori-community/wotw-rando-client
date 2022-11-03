#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Network::Web::MoonJSONDataReader {
    IL2CPP_REGISTER_METHOD(0x00447ED0, void, ctor_1, (app::MoonJSONDataReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E974A0, void, ctor_2, (app::MoonJSONDataReader * this_ptr, app::Byte__Array* data, int32_t data_length))
    IL2CPP_REGISTER_METHOD(0x02E974B0, app::Byte__Array*, get_Data, (app::MoonJSONDataReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_DataLength, (app::MoonJSONDataReader * this_ptr))
} // namespace app::classes::Moon::Network::Web::MoonJSONDataReader
