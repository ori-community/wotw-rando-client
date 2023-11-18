#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JSONDataReader.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::Moon::Network::Web::JSONDataReader {
    IL2CPP_REGISTER_METHOD(0x00447ED0, void, ctor, (app::JSONDataReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E92530, app::Byte__Array*, get_Data, (app::JSONDataReader * this_ptr))
} // namespace app::classes::Moon::Network::Web::JSONDataReader
