#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Bson::BsonToken {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::BsonToken *, get_Parent, (app::BsonToken * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Parent, (app::BsonToken * this_ptr, app::BsonToken * value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_CalculatedSize, (app::BsonToken * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_CalculatedSize, (app::BsonToken * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BsonToken * this_ptr))
}
