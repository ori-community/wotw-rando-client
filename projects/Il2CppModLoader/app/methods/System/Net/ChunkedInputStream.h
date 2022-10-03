#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::ChunkedInputStream {
    IL2CPP_REGISTER_METHOD(0x02016D60, void, ctor, (app::ChunkedInputStream * this_ptr, app::HttpListenerContext* context, app::Stream* stream, app::Byte__Array* buffer, int32_t offset, int32_t length))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::MonoChunkStream*, get_Decoder, (app::ChunkedInputStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Decoder, (app::ChunkedInputStream * this_ptr, app::MonoChunkStream* value))
    IL2CPP_REGISTER_METHOD(0x02016F70, int32_t, Read, (app::ChunkedInputStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02016FC0, app::IAsyncResult*, BeginRead, (app::ChunkedInputStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* cback, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x04796B18, ChunkedInputStream_BeginRead__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020174E0, void, OnRead, (app::ChunkedInputStream * this_ptr, app::IAsyncResult* base_ares))
    IL2CPP_REGISTER_METHODINFO(0x04773750, ChunkedInputStream_OnRead__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020178F0, int32_t, EndRead, (app::ChunkedInputStream * this_ptr, app::IAsyncResult* ares))
    IL2CPP_REGISTER_METHODINFO(0x04750898, ChunkedInputStream_EndRead__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02017B20, void, Close, (app::ChunkedInputStream * this_ptr))
} // namespace app::classes::System::Net::ChunkedInputStream
