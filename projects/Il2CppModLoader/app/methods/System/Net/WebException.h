#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::WebException {
    IL2CPP_REGISTER_METHOD(0x01D6FAD0, void, ctor_1, (app::WebException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6FAF0, void, ctor_2, (app::WebException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01D6FB20, void, ctor_3, (app::WebException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x01D6FB50, void, ctor_4, (app::WebException * this_ptr, app::String* message, app::WebExceptionStatus__Enum status))
    IL2CPP_REGISTER_METHOD(0x01D6FB70, void, ctor_5, (app::WebException * this_ptr, app::String* message, app::WebExceptionStatus__Enum status, app::WebExceptionInternalStatus__Enum internal_status, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x01D6FC60, void, ctor_6, (app::WebException * this_ptr, app::String* message, app::Exception* inner_exception, app::WebExceptionStatus__Enum status, app::WebResponse* response))
    IL2CPP_REGISTER_METHOD(0x01D6FD40, void, ctor_7, (app::WebException * this_ptr, app::String* message, app::String* data, app::Exception* inner_exception, app::WebExceptionStatus__Enum status, app::WebResponse* response))
    IL2CPP_REGISTER_METHOD(0x01D6FE40, void, ctor_8, (app::WebException * this_ptr, app::String* message, app::Exception* inner_exception, app::WebExceptionStatus__Enum status, app::WebResponse* response, app::WebExceptionInternalStatus__Enum internal_status))
    IL2CPP_REGISTER_METHOD(0x01D6FF30, void, ctor_9, (app::WebException * this_ptr, app::String* message, app::String* data, app::Exception* inner_exception, app::WebExceptionStatus__Enum status, app::WebResponse* response, app::WebExceptionInternalStatus__Enum internal_status))
    IL2CPP_REGISTER_METHOD(0x01D70040, void, ctor_10, (app::WebException * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x00C53AA0, void, ISerializable_GetObjectData, (app::WebException * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01BCD870, void, GetObjectData, (app::WebException * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x00989BF0, app::WebExceptionStatus__Enum, get_Status, (app::WebException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::WebResponse*, get_Response, (app::WebException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00736620, app::WebExceptionInternalStatus__Enum, get_InternalStatus, (app::WebException * this_ptr))
} // namespace app::classes::System::Net::WebException
