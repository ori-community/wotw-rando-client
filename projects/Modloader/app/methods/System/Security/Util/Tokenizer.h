#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Tokenizer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/TokenizerStream.h>

namespace app::classes::System::Security::Util::Tokenizer {
    IL2CPP_REGISTER_METHOD(0x01E231C0, void, BasicInitialization, (app::Tokenizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E23290, void, Recycle, (app::Tokenizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E23330, void, ctor, (app::Tokenizer * this_ptr, app::String* input))
    IL2CPP_REGISTER_METHOD(0x01E23420, void, ChangeFormat, (app::Tokenizer * this_ptr, app::Encoding* encoding))
    IL2CPP_REGISTER_METHOD(0x01E23880, void, GetTokens, (app::Tokenizer * this_ptr, app::TokenizerStream* stream, int32_t max_num, bool end_after_ket))
    IL2CPP_REGISTER_METHODINFO(0x04788400, Tokenizer_GetTokens__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E245A0, app::String*, GetStringToken, (app::Tokenizer * this_ptr))
} // namespace app::classes::System::Security::Util::Tokenizer
