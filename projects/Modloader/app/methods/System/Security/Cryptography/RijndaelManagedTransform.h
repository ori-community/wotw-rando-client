#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CipherMode__Enum.h>
#include <Modloader/app/structs/PaddingMode__Enum.h>
#include <Modloader/app/structs/RijndaelManagedTransform.h>
#include <Modloader/app/structs/RijndaelManagedTransformMode__Enum.h>

namespace app::classes::System::Security::Cryptography::RijndaelManagedTransform {
    IL2CPP_REGISTER_METHOD(
        0x028F0620,
        void,
        ctor_1,
        app::RijndaelManagedTransform* this_ptr,
        app::Byte__Array* rgb_key,
        app::CipherMode__Enum mode,
        app::Byte__Array* rgb_i_v,
        int32_t block_size,
        int32_t feedback_size,
        app::PaddingMode__Enum padding_value,
        app::RijndaelManagedTransformMode__Enum transform_mode
    )
    IL2CPP_REGISTER_METHOD(0x028F0D10, void, Dispose_1, app::RijndaelManagedTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028F0D10, void, Clear, app::RijndaelManagedTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028F0D20, void, Dispose_2, app::RijndaelManagedTransform* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_BlockSizeValue, app::RijndaelManagedTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_InputBlockSize, app::RijndaelManagedTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_OutputBlockSize, app::RijndaelManagedTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTransformMultipleBlocks, app::RijndaelManagedTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReuseTransform, app::RijndaelManagedTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x028F0DF0,
        int32_t,
        TransformBlock,
        app::RijndaelManagedTransform* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count,
        app::Byte__Array* output_buffer,
        int32_t output_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x028F1190,
        app::Byte__Array*,
        TransformFinalBlock,
        app::RijndaelManagedTransform* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count
    )
    IL2CPP_REGISTER_METHOD(0x028F14D0, void, Reset, app::RijndaelManagedTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x028F1540,
        int32_t,
        EncryptData,
        app::RijndaelManagedTransform* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count,
        app::Byte__Array** output_buffer,
        int32_t output_offset,
        app::PaddingMode__Enum padding_mode,
        bool f_last
    )
    IL2CPP_REGISTER_METHOD(
        0x028F2460,
        int32_t,
        DecryptData,
        app::RijndaelManagedTransform* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count,
        app::Byte__Array** output_buffer,
        int32_t output_offset,
        app::PaddingMode__Enum padding_mode,
        bool f_last
    )
    IL2CPP_REGISTER_METHOD(
        0x028F3490,
        void,
        Enc,
        app::RijndaelManagedTransform* this_ptr,
        int32_t* encryptindex,
        int32_t* encrypt_key_expansion,
        int32_t* T,
        int32_t* t_f,
        int32_t* work,
        int32_t* temp
    )
    IL2CPP_REGISTER_METHOD(
        0x028F3690,
        void,
        Dec,
        app::RijndaelManagedTransform* this_ptr,
        int32_t* decryptindex,
        int32_t* decrypt_key_expansion,
        int32_t* i_t,
        int32_t* i_t_f,
        int32_t* work,
        int32_t* temp
    )
    IL2CPP_REGISTER_METHOD(0x028F38D0, void, GenerateKeyExpansion, app::RijndaelManagedTransform* this_ptr, app::Byte__Array* rgb_key)
    IL2CPP_REGISTER_METHOD(0x028F4090, int32_t, rot1, int32_t val)
    IL2CPP_REGISTER_METHOD(0x028F40A0, int32_t, rot2, int32_t val)
    IL2CPP_REGISTER_METHOD(0x028F40B0, int32_t, rot3, int32_t val)
    IL2CPP_REGISTER_METHOD(0x028F40C0, int32_t, SubWord, int32_t a)
    IL2CPP_REGISTER_METHOD(0x028F4250, int32_t, MulX, int32_t x)
    IL2CPP_REGISTER_METHOD(0x028F4280, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x028F4440, void, ctor_2, app::RijndaelManagedTransform* this_ptr)
} // namespace app::classes::System::Security::Cryptography::RijndaelManagedTransform
