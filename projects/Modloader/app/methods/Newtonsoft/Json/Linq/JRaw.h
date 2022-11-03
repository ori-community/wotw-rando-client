#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Linq::JRaw {
    IL2CPP_REGISTER_METHOD(0x01F0F8F0, void, ctor_1, (app::JRaw * this_ptr, app::JRaw* other))
    IL2CPP_REGISTER_METHOD(0x01F0F900, void, ctor_2, (app::JRaw * this_ptr, app::Object* raw_json))
    IL2CPP_REGISTER_METHOD(0x01F0F910, app::JRaw*, Create, (app::JsonReader * reader))
    IL2CPP_REGISTER_METHOD(0x01F0FD60, app::JToken*, CloneToken, (app::JRaw * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Linq::JRaw
