#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ARC4Managed.h>
#include <Modloader/app/structs/ARC4Managed_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ICryptoTransform.h>

namespace app::classes::Mono::Security::Cryptography::ARC4Managed {
    IL2CPP_REGISTER_METHOD(0x025C4640, void, ctor_1, app::ARC4Managed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025C47C0, void, Finalize_1, app::ARC4Managed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025C4840, void, Dispose_1, app::ARC4Managed* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x025C4930, app::Byte__Array*, get_Key_1, app::ARC4Managed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025C4A90, void, set_Key_1, app::ARC4Managed* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanReuseTransform_1, app::ARC4Managed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025C4C20,
        app::ICryptoTransform*,
        CreateEncryptor_1,
        app::ARC4Managed* this_ptr,
        app::Byte__Array* rgb_key,
        app::Byte__Array* rgv_i_v
    )
    IL2CPP_REGISTER_METHOD(
        0x025C4C50,
        app::ICryptoTransform*,
        CreateDecryptor_1,
        app::ARC4Managed* this_ptr,
        app::Byte__Array* rgb_key,
        app::Byte__Array* rgv_i_v
    )
    IL2CPP_REGISTER_METHOD(0x025C4C90, void, GenerateIV_1, app::ARC4Managed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025C4D30, void, GenerateKey_1, app::ARC4Managed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTransformMultipleBlocks_1, app::ARC4Managed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_InputBlockSize_1, app::ARC4Managed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_OutputBlockSize_1, app::ARC4Managed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025C4D50, void, KeySetup_1, app::ARC4Managed* this_ptr, app::Byte__Array* key)
    IL2CPP_REGISTER_METHOD(
        0x025C4EC0,
        void,
        CheckInput_1,
        app::ARC4Managed* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count
    )
    IL2CPP_REGISTER_METHOD(
        0x025C5050,
        int32_t,
        TransformBlock_1,
        app::ARC4Managed* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count,
        app::Byte__Array* output_buffer,
        int32_t output_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x025C5200,
        int32_t,
        InternalTransformBlock_1,
        app::ARC4Managed* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count,
        app::Byte__Array* output_buffer,
        int32_t output_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x025C5460,
        app::Byte__Array*,
        TransformFinalBlock_1,
        app::ARC4Managed* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count
    )
    IL2CPP_REGISTER_METHOD(0x02A3A260, void, ctor_2, app::ARC4Managed_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A3A3E0, void, Finalize_2, app::ARC4Managed_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A3A460, void, Dispose_2, app::ARC4Managed_1* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x02A3A550, app::Byte__Array*, get_Key_2, app::ARC4Managed_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A3A6B0, void, set_Key_2, app::ARC4Managed_1* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanReuseTransform_2, app::ARC4Managed_1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025C4C20,
        app::ICryptoTransform*,
        CreateEncryptor_2,
        app::ARC4Managed_1* this_ptr,
        app::Byte__Array* rgb_key,
        app::Byte__Array* rgv_i_v
    )
    IL2CPP_REGISTER_METHOD(
        0x025C4C50,
        app::ICryptoTransform*,
        CreateDecryptor_2,
        app::ARC4Managed_1* this_ptr,
        app::Byte__Array* rgb_key,
        app::Byte__Array* rgv_i_v
    )
    IL2CPP_REGISTER_METHOD(0x02A3A840, void, GenerateIV_2, app::ARC4Managed_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A3A8E0, void, GenerateKey_2, app::ARC4Managed_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTransformMultipleBlocks_2, app::ARC4Managed_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_InputBlockSize_2, app::ARC4Managed_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_OutputBlockSize_2, app::ARC4Managed_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025C4D50, void, KeySetup_2, app::ARC4Managed_1* this_ptr, app::Byte__Array* key)
    IL2CPP_REGISTER_METHOD(
        0x02A3AA30,
        void,
        CheckInput_2,
        app::ARC4Managed_1* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count
    )
    IL2CPP_REGISTER_METHOD(
        0x02A3ABC0,
        int32_t,
        TransformBlock_2,
        app::ARC4Managed_1* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count,
        app::Byte__Array* output_buffer,
        int32_t output_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x025C5200,
        int32_t,
        InternalTransformBlock_2,
        app::ARC4Managed_1* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count,
        app::Byte__Array* output_buffer,
        int32_t output_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x02A3AD70,
        app::Byte__Array*,
        TransformFinalBlock_2,
        app::ARC4Managed_1* this_ptr,
        app::Byte__Array* input_buffer,
        int32_t input_offset,
        int32_t input_count
    )
} // namespace app::classes::Mono::Security::Cryptography::ARC4Managed
