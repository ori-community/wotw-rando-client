#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::CryptoAPITransform {
    IL2CPP_REGISTER_METHOD(0x00531660, void, ctor, (app::CryptoAPITransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReuseTransform, (app::CryptoAPITransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTransformMultipleBlocks, (app::CryptoAPITransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_InputBlockSize, (app::CryptoAPITransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C90C0, void*, get_KeyHandle, (app::CryptoAPITransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_OutputBlockSize, (app::CryptoAPITransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C9130, void, Dispose_1, (app::CryptoAPITransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C91E0, void, Clear, (app::CryptoAPITransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C91E0, void, Dispose_2, (app::CryptoAPITransform * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, TransformBlock, (app::CryptoAPITransform * this_ptr, app::Byte__Array* input_buffer, int32_t input_offset, int32_t input_count, app::Byte__Array* output_buffer, int32_t output_offset))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Byte__Array*, TransformFinalBlock, (app::CryptoAPITransform * this_ptr, app::Byte__Array* input_buffer, int32_t input_offset, int32_t input_count))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, (app::CryptoAPITransform * this_ptr))
} // namespace app::classes::System::Security::Cryptography::CryptoAPITransform
