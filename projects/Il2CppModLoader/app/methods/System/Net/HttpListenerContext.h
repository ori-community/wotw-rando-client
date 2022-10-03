#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::HttpListenerContext {
    IL2CPP_REGISTER_METHOD(0x01D44CE0, void, ctor_1, (app::HttpListenerContext * this_ptr, app::HttpConnection* cnc))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_ErrorStatus, (app::HttpListenerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_ErrorStatus, (app::HttpListenerContext * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_ErrorMessage, (app::HttpListenerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ErrorMessage, (app::HttpListenerContext * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00519290, bool, get_HaveError, (app::HttpListenerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::HttpConnection*, get_Connection, (app::HttpListenerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::HttpListenerRequest*, get_Request, (app::HttpListenerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::HttpListenerResponse*, get_Response, (app::HttpListenerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::IPrincipal*, get_User, (app::HttpListenerContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D45050, void, ParseAuthentication, (app::HttpListenerContext * this_ptr, app::AuthenticationSchemes__Enum expected_schemes))
    IL2CPP_REGISTER_METHOD(0x01D45200, app::IPrincipal*, ParseBasicAuthentication, (app::HttpListenerContext * this_ptr, app::String* auth_data))
    IL2CPP_REGISTER_METHOD(0x01D45690, app::Task_1_System_Net_WebSockets_HttpListenerWebSocketContext_*, AcceptWebSocketAsync_1, (app::HttpListenerContext * this_ptr, app::String* sub_protocol))
    IL2CPP_REGISTER_METHODINFO(0x0477C5C0, HttpListenerContext_AcceptWebSocketAsync__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D456E0, app::Task_1_System_Net_WebSockets_HttpListenerWebSocketContext_*, AcceptWebSocketAsync_2, (app::HttpListenerContext * this_ptr, app::String* sub_protocol, app::TimeSpan keep_alive_interval))
    IL2CPP_REGISTER_METHODINFO(0x0470C108, HttpListenerContext_AcceptWebSocketAsync_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D45730, app::Task_1_System_Net_WebSockets_HttpListenerWebSocketContext_*, AcceptWebSocketAsync_3, (app::HttpListenerContext * this_ptr, app::String* sub_protocol, int32_t receive_buffer_size, app::TimeSpan keep_alive_interval))
    IL2CPP_REGISTER_METHODINFO(0x04798408, HttpListenerContext_AcceptWebSocketAsync_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D45780, app::Task_1_System_Net_WebSockets_HttpListenerWebSocketContext_*, AcceptWebSocketAsync_4, (app::HttpListenerContext * this_ptr, app::String* sub_protocol, int32_t receive_buffer_size, app::TimeSpan keep_alive_interval, app::ArraySegment_1_Byte_ internal_buffer))
    IL2CPP_REGISTER_METHODINFO(0x04753F88, HttpListenerContext_AcceptWebSocketAsync_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D457D0, void, ctor_2, (app::HttpListenerContext * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478EFF8, HttpListenerContext__ctor_1__MethodInfo)
} // namespace app::classes::System::Net::HttpListenerContext
