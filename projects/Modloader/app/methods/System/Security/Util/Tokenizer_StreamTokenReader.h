#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Util::Tokenizer_StreamTokenReader {
    IL2CPP_REGISTER_METHOD(0x00E464D0, void, ctor, (app::Tokenizer_StreamTokenReader * this_ptr, app::StreamReader* input))
    IL2CPP_REGISTER_METHOD(0x01E245C0, int32_t, Read, (app::Tokenizer_StreamTokenReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_NumCharEncountered, (app::Tokenizer_StreamTokenReader * this_ptr))
} // namespace app::classes::System::Security::Util::Tokenizer_StreamTokenReader
