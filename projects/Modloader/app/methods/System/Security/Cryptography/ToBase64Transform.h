#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::ToBase64Transform {
    IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_InputBlockSize, (app::ToBase64Transform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, get_OutputBlockSize, (app::ToBase64Transform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanTransformMultipleBlocks, (app::ToBase64Transform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReuseTransform, (app::ToBase64Transform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E11A10, int32_t, TransformBlock, (app::ToBase64Transform * this_ptr, app::Byte__Array* input_buffer, int32_t input_offset, int32_t input_count, app::Byte__Array* output_buffer, int32_t output_offset))
    IL2CPP_REGISTER_METHODINFO(0x047502A8, ToBase64Transform_TransformBlock__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E11CC0, app::Byte__Array*, TransformFinalBlock, (app::ToBase64Transform * this_ptr, app::Byte__Array* input_buffer, int32_t input_offset, int32_t input_count))
    IL2CPP_REGISTER_METHODINFO(0x0473EE10, ToBase64Transform_TransformFinalBlock__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E11F30, void, Dispose_1, (app::ToBase64Transform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E11F30, void, Clear, (app::ToBase64Transform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose_2, (app::ToBase64Transform * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01E11FE0, void, Finalize, (app::ToBase64Transform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ToBase64Transform * this_ptr))
} // namespace app::classes::System::Security::Cryptography::ToBase64Transform
