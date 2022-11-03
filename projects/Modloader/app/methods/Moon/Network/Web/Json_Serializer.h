#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Network::Web::Json_Serializer {
    IL2CPP_REGISTER_METHOD(0x02E94940, void, ctor, (app::Json_Serializer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E94A90, app::String*, Serialize, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02E94D20, void, SerializeValue, (app::Json_Serializer * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02E94F40, void, SerializeObject, (app::Json_Serializer * this_ptr, app::IDictionary* obj))
    IL2CPP_REGISTER_METHOD(0x02E952B0, void, SerializeArray, (app::Json_Serializer * this_ptr, app::IList* an_array))
    IL2CPP_REGISTER_METHOD(0x02E95580, void, SerializeString, (app::Json_Serializer * this_ptr, app::String* str))
    IL2CPP_REGISTER_METHOD(0x02E958E0, void, SerializeOther, (app::Json_Serializer * this_ptr, app::Object* value))
} // namespace app::classes::Moon::Network::Web::Json_Serializer
