#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WebResponse_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/HttpStatusCode__Enum.h>

namespace app::classes::Moon::Network::Web::WebResponse {
    IL2CPP_REGISTER_METHOD(0x02E99D90, void, ctor_1, (app::WebResponse_1 * this_ptr, app::Byte__Array* data, app::Exception* error))
    IL2CPP_REGISTER_METHOD(0x02E99DA0, void, ctor_2, (app::WebResponse_1 * this_ptr, app::String* data, app::Exception* error))
    IL2CPP_REGISTER_METHOD(0x02E99DB0, void, ctor_3, (app::WebResponse_1 * this_ptr, app::Byte__Array* data, app::Exception* error, int32_t status_code))
    IL2CPP_REGISTER_METHOD(0x02E99DC0, void, DispatchError, (app::WebResponse_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Byte__Array*, get_ByteData, (app::WebResponse_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_StringData, (app::WebResponse_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Exception*, get_Error, (app::WebResponse_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E99DD0, bool, get_IsSucceeded, (app::WebResponse_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E99DE0, bool, get_IsFailed, (app::WebResponse_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_StatusCode, (app::WebResponse_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, SetStatusCode, (app::WebResponse_1 * this_ptr, app::HttpStatusCode__Enum status_code))
    IL2CPP_REGISTER_METHOD(0x02E99DF0, app::HttpStatusCode__Enum, get_Status, (app::WebResponse_1 * this_ptr))
} // namespace app::classes::Moon::Network::Web::WebResponse
