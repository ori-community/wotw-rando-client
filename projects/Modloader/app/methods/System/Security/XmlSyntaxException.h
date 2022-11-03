#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::XmlSyntaxException {
    IL2CPP_REGISTER_METHOD(0x01E25790, void, ctor_1, (app::XmlSyntaxException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E257A0, void, ctor_2, (app::XmlSyntaxException * this_ptr, int32_t line_number))
    IL2CPP_REGISTER_METHOD(0x01E258A0, void, ctor_3, (app::XmlSyntaxException * this_ptr, int32_t line_number, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01E259B0, void, ctor_4, (app::XmlSyntaxException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01E259C0, void, ctor_5, (app::XmlSyntaxException * this_ptr, app::String* message, app::Exception* inner))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_6, (app::XmlSyntaxException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Security::XmlSyntaxException
