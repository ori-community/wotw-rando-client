#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonStringContract.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonStringContract {
    IL2CPP_REGISTER_METHOD(0x01BF8D10, void, ctor, (app::JsonStringContract * this_ptr, app::Type* underlying_type))
}
