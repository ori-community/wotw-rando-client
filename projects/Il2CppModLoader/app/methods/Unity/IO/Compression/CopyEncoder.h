#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Unity::IO::Compression::CopyEncoder {
    IL2CPP_REGISTER_METHOD(0x02B71C80, void, GetBlock, (app::CopyEncoder * this_ptr, app::DeflateInput * input, app::OutputBuffer * output, bool is_final))
    IL2CPP_REGISTER_METHOD(0x02B71EC0, void, WriteLenNLen, (app::CopyEncoder * this_ptr, uint16_t len, app::OutputBuffer * output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CopyEncoder * this_ptr))
}
