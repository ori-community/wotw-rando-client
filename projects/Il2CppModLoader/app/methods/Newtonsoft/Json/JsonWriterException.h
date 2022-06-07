#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::JsonWriterException {
    IL2CPP_REGISTER_METHOD(0x01A6BEE0, void, ctor_1, (app::JsonWriterException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6BEF0, void, ctor_2, (app::JsonWriterException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01F035E0, void, ctor_3, (app::JsonWriterException * this_ptr, app::String * message, app::String * path, app::Exception * inner_exception))
    IL2CPP_REGISTER_METHOD(0x01F03610, app::JsonWriterException *, Create_1, (app::JsonWriter * writer, app::String * message, app::Exception * ex))
    IL2CPP_REGISTER_METHOD(0x01F03650, app::JsonWriterException *, Create_2, (app::String * path, app::String * message, app::Exception * ex))
}
