#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Unity::IO::Compression::FastEncoder {
    IL2CPP_REGISTER_METHOD(0x02B76210, void, ctor, (app::FastEncoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B76420, int32_t, get_BytesInHistory, (app::FastEncoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B76440, app::DeflateInput *, get_UnprocessedInput, (app::FastEncoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B765B0, void, FlushInput, (app::FastEncoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_LastCompressionRatio, (app::FastEncoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B765D0, void, GetBlock, (app::FastEncoder * this_ptr, app::DeflateInput * input, app::OutputBuffer * output, int32_t max_bytes_to_copy))
    IL2CPP_REGISTER_METHOD(0x02B76640, void, GetCompressedData, (app::FastEncoder * this_ptr, app::DeflateInput * input, app::OutputBuffer * output))
    IL2CPP_REGISTER_METHOD(0x02B76660, void, GetBlockHeader, (app::FastEncoder * this_ptr, app::OutputBuffer * output))
    IL2CPP_REGISTER_METHOD(0x02B76670, void, GetBlockFooter, (app::FastEncoder * this_ptr, app::OutputBuffer * output))
    IL2CPP_REGISTER_METHOD(0x02B76680, void, GetCompressedOutput_1, (app::FastEncoder * this_ptr, app::DeflateInput * input, app::OutputBuffer * output, int32_t max_bytes_to_copy))
    IL2CPP_REGISTER_METHOD(0x02B769B0, void, GetCompressedOutput_2, (app::FastEncoder * this_ptr, app::OutputBuffer * output))
    IL2CPP_REGISTER_METHOD(0x02B76AD0, bool, InputAvailable, (app::FastEncoder * this_ptr, app::DeflateInput * input))
    IL2CPP_REGISTER_METHOD(0x02B76B10, bool, SafeToWriteTo, (app::FastEncoder * this_ptr, app::OutputBuffer * output))
    IL2CPP_REGISTER_METHOD(0x02B76B40, void, WriteEndOfBlock, (app::FastEncoder * this_ptr, app::OutputBuffer * output))
    IL2CPP_REGISTER_METHOD(0x02B76C30, void, WriteMatch, (int32_t match_len, int32_t match_pos, app::OutputBuffer * output))
    IL2CPP_REGISTER_METHOD(0x02B76F40, void, WriteChar, (uint8_t b, app::OutputBuffer * output))
    IL2CPP_REGISTER_METHOD(0x02B77040, void, WriteDeflatePreamble, (app::OutputBuffer * output))
}
