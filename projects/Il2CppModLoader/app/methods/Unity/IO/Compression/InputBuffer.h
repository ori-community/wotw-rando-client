#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Unity::IO::Compression::InputBuffer {
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_AvailableBits, (app::InputBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7CD80, int32_t, get_AvailableBytes, (app::InputBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7CDA0, bool, EnsureBitsAvailable, (app::InputBuffer * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B7CEA0, uint32_t, TryLoad16Bits, (app::InputBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7CFB0, uint32_t, GetBitMask, (app::InputBuffer * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B7CFC0, int32_t, GetBits, (app::InputBuffer * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B7D020, int32_t, CopyTo, (app::InputBuffer * this_ptr, app::Byte__Array* output, int32_t offset, int32_t length))
    IL2CPP_REGISTER_METHOD(0x021E17F0, bool, NeedsInput, (app::InputBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7D0E0, void, SetInput, (app::InputBuffer * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t length))
    IL2CPP_REGISTER_METHOD(0x02B7D0F0, void, SkipBits, (app::InputBuffer * this_ptr, int32_t n))
    IL2CPP_REGISTER_METHOD(0x02B7D110, void, SkipToByteBoundary, (app::InputBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InputBuffer * this_ptr))
} // namespace app::classes::Unity::IO::Compression::InputBuffer
