#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/JsonException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::JsonException {
    IL2CPP_REGISTER_METHOD(0x01A65860, void, ctor_1, app::JsonException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A65900, void, ctor_2, app::JsonException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01A659B0, void, ctor_3, app::JsonException* this_ptr, app::String* message, app::Exception* inner_exception)
    IL2CPP_REGISTER_METHOD(0x01A65A70, void, ctor_4, app::JsonException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::Newtonsoft::Json::JsonException
