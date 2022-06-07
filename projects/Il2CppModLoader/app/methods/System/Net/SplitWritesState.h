#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::SplitWritesState {
    IL2CPP_REGISTER_METHOD(0x020A53C0, void, ctor, (app::SplitWritesState * this_ptr, app::BufferOffsetSize_1__Array * buffers))
    IL2CPP_REGISTER_METHOD(0x020A53D0, bool, get_IsDone, (app::SplitWritesState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A5440, app::BufferOffsetSize_1__Array *, GetNextBuffers, (app::SplitWritesState * this_ptr))
}
