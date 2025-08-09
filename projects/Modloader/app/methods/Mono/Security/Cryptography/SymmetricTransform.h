#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/PaddingMode__Enum.h>
#include <Modloader/app/structs/SymmetricAlgorithm.h>
#include <Modloader/app/structs/SymmetricTransform.h>

namespace app::classes::Mono::Security::Cryptography::SymmetricTransform {
    IL2CPP_REGISTER_METHOD(
        0x025D7EF0,
        void,
        ctor,
        app::SymmetricTransform* this_ptr,
        app::SymmetricAlgorithm* symm_algo,
        bool encryption,
        app::Byte__Array* rgb_i_v
    )
    IL2CPP_REGISTER_METHOD(0x025D8260, void, Finalize, app::SymmetricTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025D82E0, void, IDisposable_Dispose, app::SymmetricTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025D8390, void, Dispose, app::SymmetricTransform* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTransformMultipleBlocks, app::SymmetricTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanReuseTransform, app::SymmetricTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_InputBlockSize, app::SymmetricTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_OutputBlockSize, app::SymmetricTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025D83F0, void, Transform, app::SymmetricTransform* this_ptr, app::Byte__Array* input, app::Byte__Array* output)
    IL2CPP_REGISTER_METHOD(0x025D8610, void, CBC, app::SymmetricTransform* this_ptr, app::Byte__Array* input, app::Byte__Array* output)
    IL2CPP_REGISTER_METHOD(0x025D87B0, void, CFB, app::SymmetricTransform* this_ptr, app::Byte__Array* input, app::Byte__Array* output)
    IL2CPP_REGISTER_METHOD(0x025D8A20, void, OFB, app::SymmetricTransform* this_ptr, app::Byte__Array* input, app::Byte__Array* output)
    IL2CPP_REGISTER_METHOD(0x025D8A80, void, CTS, app::SymmetricTransform* this_ptr, app::Byte__Array* input, app::Byte__Array* output)
    IL2CPP_REGISTER_METHOD(
        0x025D8AE0,
        void,
        CheckInput,
        app::SymmetricTransform* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count
    )
    IL2CPP_REGISTER_METHOD(
        0x025D8C70,
        int32_t,
        TransformBlock,
        app::SymmetricTransform* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count,
        app::Byte__Array* output_buffer,
        int32_t output_offset
    )
    IL2CPP_REGISTER_METHOD(0x025D8F50, bool, get_KeepLastBlock, app::SymmetricTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025D8F70,
        int32_t,
        InternalTransformBlock,
        app::SymmetricTransform* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count,
        app::Byte__Array* output_buffer,
        int32_t output_offset
    )
    IL2CPP_REGISTER_METHOD(0x025D9190, void, Random, app::SymmetricTransform* this_ptr, app::Byte__Array* buffer, int32_t start, int32_t length)
    IL2CPP_REGISTER_METHOD(
        0x025D9290,
        void,
        ThrowBadPaddingException,
        app::SymmetricTransform* this_ptr,
        app::PaddingMode__Enum padding,
        int32_t length,
        int32_t position
    )
    IL2CPP_REGISTER_METHOD(
        0x025D9450,
        app::Byte__Array*,
        FinalEncrypt,
        app::SymmetricTransform* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count
    )
    IL2CPP_REGISTER_METHOD(
        0x025D9850,
        app::Byte__Array*,
        FinalDecrypt,
        app::SymmetricTransform* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count
    )
    IL2CPP_REGISTER_METHOD(
        0x025D9BE0,
        app::Byte__Array*,
        TransformFinalBlock,
        app::SymmetricTransform* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count
    )
} // namespace app::classes::Mono::Security::Cryptography::SymmetricTransform
