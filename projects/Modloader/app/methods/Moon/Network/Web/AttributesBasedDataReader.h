#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AttributesBasedDataReader.h>
#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Object_.h>

namespace app::classes::Moon::Network::Web::AttributesBasedDataReader {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, SetRequest, (app::AttributesBasedDataReader * this_ptr, app::IRequest* request))
    IL2CPP_REGISTER_METHOD(0x02E92110, void, CreateBody, (app::AttributesBasedDataReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E92440, void, AddToBody, (app::AttributesBasedDataReader * this_ptr, app::String* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IgnoreNullValues, (app::AttributesBasedDataReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IgnoreNullValues, (app::AttributesBasedDataReader * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02E92500, app::Dictionary_2_System_String_System_Object_*, get_Body, (app::AttributesBasedDataReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AttributesBasedDataReader * this_ptr))
} // namespace app::classes::Moon::Network::Web::AttributesBasedDataReader
