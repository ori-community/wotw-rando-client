#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BytesDataReader.h>

namespace app::classes::Moon::Network::Web::BytesDataReader {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BytesDataReader * this_ptr))
}
