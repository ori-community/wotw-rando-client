#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Base64Stream.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Base64Stream_ReadStateInfo.h>
#include <Modloader/app/structs/Base64WriteStateInfo.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Base64Stream {
    IL2CPP_REGISTER_METHOD(0x02010F00, void, ctor_1, (app::Base64Stream * this_ptr, app::Stream* stream, app::Base64WriteStateInfo* write_state_info))
    IL2CPP_REGISTER_METHOD(0x02011110, void, ctor_2, (app::Base64Stream * this_ptr, app::Stream* stream, int32_t line_length))
    IL2CPP_REGISTER_METHOD(0x02011300, void, ctor_3, (app::Base64Stream * this_ptr, app::Base64WriteStateInfo* write_state_info))
    IL2CPP_REGISTER_METHOD(0x01706DA0, bool, get_CanWrite, (app::Base64Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020113C0, app::Base64Stream_ReadStateInfo*, get_ReadState, (app::Base64Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Base64WriteStateInfo*, get_WriteState, (app::Base64Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02011510, app::IAsyncResult*, BeginRead, (app::Base64Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x02011760, app::IAsyncResult*, BeginWrite, (app::Base64Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x020119B0, void, Close, (app::Base64Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02011D60, int32_t, DecodeBytes, (app::Base64Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02012090, int32_t, EncodeBytes_1, (app::Base64Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x020120C0, int32_t, EncodeBytes_2, (app::Base64Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, bool dont_defer_final_bytes, bool should_append_space_to_c_r_l_f))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Stream*, GetStream, (app::Base64Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02012F90, app::String*, GetEncodedString, (app::Base64Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02012FF0, int32_t, EndRead, (app::Base64Stream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x02013180, void, EndWrite, (app::Base64Stream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x02013340, void, Flush, (app::Base64Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02013390, void, FlushInternal, (app::Base64Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020134D0, int32_t, Read, (app::Base64Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02013740, void, Write, (app::Base64Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02013900, void, cctor, ())
} // namespace app::classes::System::Net::Base64Stream
