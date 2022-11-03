#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::WWWTranscoder {
    IL2CPP_REGISTER_METHOD(0x03181410, uint8_t, Hex2Byte, (app::Byte__Array * b, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x031814A0, app::Byte__Array*, URLDecode, (app::Byte__Array * to_encode))
    IL2CPP_REGISTER_METHOD(0x03181560, bool, ByteSubArrayEquals, (app::Byte__Array * array, int32_t index, app::Byte__Array* comperand))
    IL2CPP_REGISTER_METHOD(0x03181610, app::Byte__Array*, Decode, (app::Byte__Array * input, uint8_t escape_char, app::Byte__Array* space))
    IL2CPP_REGISTER_METHOD(0x03181980, void, cctor, ())
} // namespace app::classes::UnityEngine::WWWTranscoder
