#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::SHA1Managed {
    IL2CPP_REGISTER_METHOD(0x028F6F80, void, ctor, (app::SHA1Managed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752B98, SHA1Managed__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028F7040, void, Initialize, (app::SHA1Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F7090, void, HashCore, (app::SHA1Managed * this_ptr, app::Byte__Array* rgb, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x028F70A0, app::Byte__Array*, HashFinal, (app::SHA1Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E0BA0, void, InitializeState, (app::SHA1Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F70B0, void, _HashData, (app::SHA1Managed * this_ptr, app::Byte__Array* part_in, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x028F7250, app::Byte__Array*, _EndHash, (app::SHA1Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F74F0, void, SHATransform, (uint32_t * expanded_buffer, uint32_t* state, uint8_t* block))
    IL2CPP_REGISTER_METHOD(0x028F7B30, void, SHAExpand, (uint32_t * x))
} // namespace app::classes::System::Security::Cryptography::SHA1Managed
