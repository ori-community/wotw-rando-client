#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::HashAlgorithm {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::HashAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_HashSize, (app::HashAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DAAD0, app::Byte__Array*, get_Hash, (app::HashAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04786D30, HashAlgorithm_get_Hash__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020DAC90, app::HashAlgorithm*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x020DADD0, app::HashAlgorithm*, Create_2, (app::String * hash_name))
    IL2CPP_REGISTER_METHOD(0x020DAEB0, app::Byte__Array*, ComputeHash_1, (app::HashAlgorithm * this_ptr, app::Stream* input_stream))
    IL2CPP_REGISTER_METHODINFO(0x047045C0, HashAlgorithm_ComputeHash__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020DB0D0, app::Byte__Array*, ComputeHash_2, (app::HashAlgorithm * this_ptr, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHODINFO(0x04752FF0, HashAlgorithm_ComputeHash_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020DB2E0, app::Byte__Array*, ComputeHash_3, (app::HashAlgorithm * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04775198, HashAlgorithm_ComputeHash_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_InputBlockSize, (app::HashAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_OutputBlockSize, (app::HashAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTransformMultipleBlocks, (app::HashAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReuseTransform, (app::HashAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DB5B0, int32_t, TransformBlock, (app::HashAlgorithm * this_ptr, app::Byte__Array* input_buffer, int32_t input_offset, int32_t input_count, app::Byte__Array* output_buffer, int32_t output_offset))
    IL2CPP_REGISTER_METHODINFO(0x04787668, HashAlgorithm_TransformBlock__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020DB800, app::Byte__Array*, TransformFinalBlock, (app::HashAlgorithm * this_ptr, app::Byte__Array* input_buffer, int32_t input_offset, int32_t input_count))
    IL2CPP_REGISTER_METHODINFO(0x04745838, HashAlgorithm_TransformFinalBlock__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020DBA90, void, Dispose_1, (app::HashAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DBB40, void, Clear, (app::HashAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DBBD0, void, Dispose_2, (app::HashAlgorithm * this_ptr, bool disposing))
} // namespace app::classes::System::Security::Cryptography::HashAlgorithm
