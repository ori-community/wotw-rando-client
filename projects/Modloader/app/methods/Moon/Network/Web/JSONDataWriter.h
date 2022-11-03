#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Network::Web::JSONDataWriter {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, SetResult, (app::JSONDataWriter * this_ptr, app::IRequestCallback* result))
    IL2CPP_REGISTER_METHOD(0x02E925A0, void, Parse_1, (app::JSONDataWriter * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x02E92720, void, Parse_2, (app::JSONDataWriter * this_ptr, app::Object* data, app::Object** holder))
    IL2CPP_REGISTER_METHOD(0x02E928D0, void, Parse_3, (app::JSONDataWriter * this_ptr, app::Dictionary_2_System_String_System_Object_* data, app::Object** holder))
    IL2CPP_REGISTER_METHOD(0x02E92B40, app::Object*, GetValue, (app::JSONDataWriter * this_ptr, app::Object* filed_value, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x02E92BF0, app::FieldInfo_1*, GetFieldByName, (app::JSONDataWriter * this_ptr, app::String* filed_name, app::Object** holder))
    IL2CPP_REGISTER_METHOD(0x02E92E10, app::Object*, GetDefaultValue, (app::JSONDataWriter * this_ptr, app::Type* t))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JSONDataWriter * this_ptr))
} // namespace app::classes::Moon::Network::Web::JSONDataWriter
