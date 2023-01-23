#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/IXmlLineInfo.h>
#include <Modloader/app/structs/Char__Array.h>

namespace app::classes::System::Xml::XmlException {
    IL2CPP_REGISTER_METHOD(0x01DB7C90, void, ctor_1, (app::XmlException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01DB80D0, void, GetObjectData, (app::XmlException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01DB8220, void, ctor_2, (app::XmlException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB8250, void, ctor_3, (app::XmlException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01DB8280, void, ctor_4, (app::XmlException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x01DB82B0, void, ctor_5, (app::XmlException * this_ptr, app::String* message, app::Exception* inner_exception, int32_t line_number, int32_t line_position))
    IL2CPP_REGISTER_METHOD(0x01DB82E0, void, ctor_6, (app::XmlException * this_ptr, app::String* message, app::Exception* inner_exception, int32_t line_number, int32_t line_position, app::String* source_uri))
    IL2CPP_REGISTER_METHOD(0x01DB8550, void, ctor_7, (app::XmlException * this_ptr, app::String* res, app::String__Array* args))
    IL2CPP_REGISTER_METHOD(0x01DB85D0, void, ctor_8, (app::XmlException * this_ptr, app::String* res, app::String* arg))
    IL2CPP_REGISTER_METHOD(0x01DB8730, void, ctor_9, (app::XmlException * this_ptr, app::String* res, app::String* arg, app::String* source_uri))
    IL2CPP_REGISTER_METHOD(0x01DB8860, void, ctor_10, (app::XmlException * this_ptr, app::String* res, app::String* arg, app::IXmlLineInfo* line_info))
    IL2CPP_REGISTER_METHOD(0x01DB8980, void, ctor_11, (app::XmlException * this_ptr, app::String* res, app::String__Array* args, app::IXmlLineInfo* line_info))
    IL2CPP_REGISTER_METHOD(0x01DB89A0, void, ctor_12, (app::XmlException * this_ptr, app::String* res, app::String__Array* args, app::IXmlLineInfo* line_info, app::String* source_uri))
    IL2CPP_REGISTER_METHOD(0x01DB8AB0, void, ctor_13, (app::XmlException * this_ptr, app::String* res, app::String* arg, int32_t line_number, int32_t line_position))
    IL2CPP_REGISTER_METHOD(0x01DB8BE0, void, ctor_14, (app::XmlException * this_ptr, app::String* res, app::String* arg, int32_t line_number, int32_t line_position, app::String* source_uri))
    IL2CPP_REGISTER_METHOD(0x01DB8D20, void, ctor_15, (app::XmlException * this_ptr, app::String* res, app::String__Array* args, int32_t line_number, int32_t line_position))
    IL2CPP_REGISTER_METHOD(0x01DB8D50, void, ctor_16, (app::XmlException * this_ptr, app::String* res, app::String__Array* args, int32_t line_number, int32_t line_position, app::String* source_uri))
    IL2CPP_REGISTER_METHOD(0x01DB8D90, void, ctor_17, (app::XmlException * this_ptr, app::String* res, app::String__Array* args, app::Exception* inner_exception, int32_t line_number, int32_t line_position))
    IL2CPP_REGISTER_METHOD(0x01DB8DC0, void, ctor_18, (app::XmlException * this_ptr, app::String* res, app::String__Array* args, app::Exception* inner_exception, int32_t line_number, int32_t line_position, app::String* source_uri))
    IL2CPP_REGISTER_METHOD(0x01DB8E70, app::String*, FormatUserMessage, (app::String * message, int32_t line_number, int32_t line_position))
    IL2CPP_REGISTER_METHOD(0x01DB8FB0, app::String*, CreateMessage, (app::String * res, app::String__Array* args, int32_t line_number, int32_t line_position))
    IL2CPP_REGISTER_METHOD(0x01DB9220, app::String__Array*, BuildCharExceptionArgs_1, (app::String * data, int32_t inv_char_index))
    IL2CPP_REGISTER_METHOD(0x01DB9280, app::String__Array*, BuildCharExceptionArgs_2, (app::Char__Array * data, int32_t length, int32_t inv_char_index))
    IL2CPP_REGISTER_METHOD(0x01DB9300, app::String__Array*, BuildCharExceptionArgs_3, (uint16_t inv_char, uint16_t next_char))
    IL2CPP_REGISTER_METHOD(0x00736620, int32_t, get_LineNumber, (app::XmlException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007007F0, int32_t, get_LinePosition, (app::XmlException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DB9740, app::String*, get_Message, (app::XmlException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String*, get_ResString, (app::XmlException * this_ptr))
} // namespace app::classes::System::Xml::XmlException
