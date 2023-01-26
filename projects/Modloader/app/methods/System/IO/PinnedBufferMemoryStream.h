#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PinnedBufferMemoryStream.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::IO::PinnedBufferMemoryStream {
    IL2CPP_REGISTER_METHOD(0x0237B110, void, ctor, (app::PinnedBufferMemoryStream * this_ptr, app::Byte__Array* array))
    IL2CPP_REGISTER_METHOD(0x0237B290, void, Finalize, (app::PinnedBufferMemoryStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237B310, void, Dispose, (app::PinnedBufferMemoryStream * this_ptr, bool disposing))
} // namespace app::classes::System::IO::PinnedBufferMemoryStream
