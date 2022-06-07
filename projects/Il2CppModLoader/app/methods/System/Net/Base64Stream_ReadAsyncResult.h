#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Base64Stream_ReadAsyncResult {
    IL2CPP_REGISTER_METHOD(0x020139E0, void, ctor, (app::Base64Stream_ReadAsyncResult * this_ptr, app::Base64Stream * parent, app::Byte__Array * buffer, int32_t offset, int32_t count, app::AsyncCallback * callback, app::Object * state))
    IL2CPP_REGISTER_METHOD(0x02013A50, bool, CompleteRead, (app::Base64Stream_ReadAsyncResult * this_ptr, app::IAsyncResult * result))
    IL2CPP_REGISTER_METHOD(0x02013AE0, void, Read, (app::Base64Stream_ReadAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02013D80, void, OnRead, (app::IAsyncResult * result))
    IL2CPP_REGISTER_METHODINFO(0x04750648, Base64Stream_ReadAsyncResult_OnRead__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02013F10, int32_t, End, (app::IAsyncResult * result))
    IL2CPP_REGISTER_METHOD(0x02013FF0, void, cctor, ())
}
