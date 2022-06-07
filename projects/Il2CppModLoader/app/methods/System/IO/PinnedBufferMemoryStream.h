#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::IO::PinnedBufferMemoryStream {
    IL2CPP_REGISTER_METHOD(0x0237B110, void, ctor, (app::PinnedBufferMemoryStream * this_ptr, app::Byte__Array * array))
    IL2CPP_REGISTER_METHOD(0x0237B290, void, Finalize, (app::PinnedBufferMemoryStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237B310, void, Dispose, (app::PinnedBufferMemoryStream * this_ptr, bool disposing))
}
