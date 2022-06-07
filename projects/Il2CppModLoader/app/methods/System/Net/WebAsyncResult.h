#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::WebAsyncResult {
    IL2CPP_REGISTER_METHOD(0x020AD7F0, void, ctor_1, (app::WebAsyncResult * this_ptr, app::AsyncCallback * cb, app::Object * state))
    IL2CPP_REGISTER_METHOD(0x020AD800, void, ctor_2, (app::WebAsyncResult * this_ptr, app::HttpWebRequest * request, app::AsyncCallback * cb, app::Object * state))
    IL2CPP_REGISTER_METHOD(0x020AD840, void, ctor_3, (app::WebAsyncResult * this_ptr, app::AsyncCallback * cb, app::Object * state, app::Byte__Array * buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x020AD880, void, Reset, (app::WebAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020AD8A0, void, SetCompleted_1, (app::WebAsyncResult * this_ptr, bool synch, int32_t nbytes))
    IL2CPP_REGISTER_METHOD(0x020AD8B0, void, SetCompleted_2, (app::WebAsyncResult * this_ptr, bool synch, app::Stream * write_stream))
    IL2CPP_REGISTER_METHOD(0x020AD8C0, void, SetCompleted_3, (app::WebAsyncResult * this_ptr, bool synch, app::HttpWebResponse * response))
    IL2CPP_REGISTER_METHOD(0x01BDAFF0, void, DoCallback, (app::WebAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_NBytes, (app::WebAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_NBytes, (app::WebAsyncResult * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IAsyncResult *, get_InnerAsyncResult, (app::WebAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_InnerAsyncResult, (app::WebAsyncResult * this_ptr, app::IAsyncResult * value))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Stream *, get_WriteStream, (app::WebAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::HttpWebResponse *, get_Response, (app::WebAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Byte__Array *, get_Buffer, (app::WebAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_Offset, (app::WebAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC050, int32_t, get_Size, (app::WebAsyncResult * this_ptr))
}
