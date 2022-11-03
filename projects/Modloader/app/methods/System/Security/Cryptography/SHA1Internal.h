#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::SHA1Internal {
    IL2CPP_REGISTER_METHOD(0x028F4BC0, void, ctor, (app::SHA1Internal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F4C80, void, HashCore, (app::SHA1Internal * this_ptr, app::Byte__Array* rgb, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x028F4DA0, app::Byte__Array*, HashFinal, (app::SHA1Internal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F4F00, void, Initialize, (app::SHA1Internal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F5000, void, ProcessBlock, (app::SHA1Internal * this_ptr, app::Byte__Array* input_buffer, uint32_t input_offset))
    IL2CPP_REGISTER_METHOD(0x028F58E0, void, InitialiseBuff, (app::UInt32__Array * buff, app::Byte__Array* input, uint32_t input_offset))
    IL2CPP_REGISTER_METHOD(0x028F65E0, void, FillBuff, (app::UInt32__Array * buff))
    IL2CPP_REGISTER_METHOD(0x028F6BF0, void, ProcessFinalBlock, (app::SHA1Internal * this_ptr, app::Byte__Array* input_buffer, int32_t input_offset, int32_t input_count))
    IL2CPP_REGISTER_METHOD(0x028F6E10, void, AddLength, (app::SHA1Internal * this_ptr, uint64_t length, app::Byte__Array* buffer, int32_t position))
} // namespace app::classes::System::Security::Cryptography::SHA1Internal
