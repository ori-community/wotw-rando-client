#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FastEncoderWindow.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DeflateInput.h>
#include <Modloader/app/structs/Match_1.h>

namespace app::classes::Unity::IO::Compression::FastEncoderWindow {
    IL2CPP_REGISTER_METHOD(0x02B775B0, void, ctor, (app::FastEncoderWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B775C0, int32_t, get_BytesAvailable, (app::FastEncoderWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B775D0, app::DeflateInput*, get_UnprocessedInput, (app::FastEncoderWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B775B0, void, FlushWindow, (app::FastEncoderWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B77730, void, ResetWindow, (app::FastEncoderWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B777F0, int32_t, get_FreeWindowSpace, (app::FastEncoderWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B77800, void, CopyBytes, (app::FastEncoderWindow * this_ptr, app::Byte__Array* input_buffer, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B77850, void, MoveWindows, (app::FastEncoderWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B779A0, uint32_t, HashValue, (app::FastEncoderWindow * this_ptr, uint32_t hash, uint8_t b))
    IL2CPP_REGISTER_METHOD(0x02B779B0, uint32_t, InsertString, (app::FastEncoderWindow * this_ptr, uint32_t* hash))
    IL2CPP_REGISTER_METHOD(0x02B77A80, void, InsertStrings, (app::FastEncoderWindow * this_ptr, uint32_t* hash, int32_t match_len))
    IL2CPP_REGISTER_METHOD(0x02B77BA0, bool, GetNextSymbolOrMatch, (app::FastEncoderWindow * this_ptr, app::Match_1* match))
    IL2CPP_REGISTER_METHOD(0x02B77E70, int32_t, FindMatch, (app::FastEncoderWindow * this_ptr, int32_t search, int32_t* match_pos, int32_t search_depth, int32_t nice_length))
    IL2CPP_REGISTER_METHOD(0x02B78070, void, VerifyHashes, (app::FastEncoderWindow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B78130, uint32_t, RecalculateHash, (app::FastEncoderWindow * this_ptr, int32_t position))
} // namespace app::classes::Unity::IO::Compression::FastEncoderWindow
