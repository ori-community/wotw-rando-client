#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::InteropServices::SafeBuffer {
    IL2CPP_REGISTER_METHOD(0x01A96CB0, void, AcquirePointer, (app::SafeBuffer * this_ptr, app::uint8_t * * pointer))
    IL2CPP_REGISTER_METHODINFO(0x04724368, SafeBuffer_AcquirePointer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A96D90, void, ReleasePointer, (app::SafeBuffer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766778, SafeBuffer_ReleasePointer__MethodInfo)
}
