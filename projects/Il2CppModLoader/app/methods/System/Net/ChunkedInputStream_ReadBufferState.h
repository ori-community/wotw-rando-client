#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::ChunkedInputStream_ReadBufferState {
    IL2CPP_REGISTER_METHOD(0x02017B30, void, ctor, (app::ChunkedInputStream_ReadBufferState * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count, app::HttpStreamAsyncResult * ares))
}
