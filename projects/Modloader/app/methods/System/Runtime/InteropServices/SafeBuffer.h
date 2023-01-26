#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SafeBuffer.h>
#include <Modloader/app/structs/uint8_t.h>

namespace app::classes::System::Runtime::InteropServices::SafeBuffer {
    IL2CPP_REGISTER_METHOD(0x01A96CB0, void, AcquirePointer, (app::SafeBuffer * this_ptr, app::uint8_t** pointer))
    IL2CPP_REGISTER_METHOD(0x01A96D90, void, ReleasePointer, (app::SafeBuffer * this_ptr))
} // namespace app::classes::System::Runtime::InteropServices::SafeBuffer
