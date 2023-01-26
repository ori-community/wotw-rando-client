#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AuthenticatedStream.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::System::Net::Security::AuthenticatedStream {
    IL2CPP_REGISTER_METHOD(0x01BD0C70, void, ctor, (app::AuthenticatedStream * this_ptr, app::Stream* inner_stream, bool leave_inner_stream_open))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Stream*, get_InnerStream, (app::AuthenticatedStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BD0E40, void, Dispose, (app::AuthenticatedStream * this_ptr, bool disposing))
} // namespace app::classes::System::Net::Security::AuthenticatedStream
