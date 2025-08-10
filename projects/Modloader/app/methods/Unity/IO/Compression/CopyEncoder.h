#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CopyEncoder.h>
#include <Modloader/app/structs/DeflateInput.h>
#include <Modloader/app/structs/OutputBuffer.h>

namespace app::classes::Unity::IO::Compression::CopyEncoder {
    IL2CPP_REGISTER_METHOD(0x02B71C80, void, GetBlock, app::CopyEncoder* this_ptr, app::DeflateInput* input, app::OutputBuffer* output, bool is_final)
    IL2CPP_REGISTER_METHOD(0x02B71EC0, void, WriteLenNLen, app::CopyEncoder* this_ptr, uint16_t len, app::OutputBuffer* output)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CopyEncoder* this_ptr)
} // namespace app::classes::Unity::IO::Compression::CopyEncoder
