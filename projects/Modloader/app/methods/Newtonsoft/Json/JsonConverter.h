#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JsonConverter.h>

namespace app::classes::Newtonsoft::Json::JsonConverter {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanRead, (app::JsonConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanWrite, (app::JsonConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JsonConverter * this_ptr))
} // namespace app::classes::Newtonsoft::Json::JsonConverter
