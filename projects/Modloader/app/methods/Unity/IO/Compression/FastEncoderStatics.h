#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Unity::IO::Compression::FastEncoderStatics {
    IL2CPP_REGISTER_METHOD(0x02B77130, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02B774A0, int32_t, GetSlot, (int32_t pos))
    IL2CPP_REGISTER_METHOD(0x02B77580, uint32_t, BitReverse, (uint32_t code, int32_t length))
} // namespace app::classes::Unity::IO::Compression::FastEncoderStatics
