#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonLinqContract.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonLinqContract {
    IL2CPP_REGISTER_METHOD(0x01872000, void, ctor, app::JsonLinqContract* this_ptr, app::Type* underlying_type)
}
