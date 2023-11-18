#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClosableStream.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::System::Net::ClosableStream {
    IL2CPP_REGISTER_METHOD(0x02017B50, void, ctor, (app::ClosableStream * this_ptr, app::Stream* stream, app::EventHandler* on_close))
    IL2CPP_REGISTER_METHOD(0x02017B80, void, Close, (app::ClosableStream * this_ptr))
} // namespace app::classes::System::Net::ClosableStream
