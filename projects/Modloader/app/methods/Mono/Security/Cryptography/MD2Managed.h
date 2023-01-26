#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/MD2Managed.h>
#include <Modloader/app/structs/MD2Managed_1.h>

namespace app::classes::Mono::Security::Cryptography::MD2Managed {
    IL2CPP_REGISTER_METHOD(0x025CE830, app::Byte__Array*, Padding_1, (app::MD2Managed * this_ptr, int32_t n_length))
    IL2CPP_REGISTER_METHOD(0x025CE910, void, ctor_1, (app::MD2Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025CE9F0, void, Initialize_1, (app::MD2Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025CEA50, void, HashCore_1, (app::MD2Managed * this_ptr, app::Byte__Array* array, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x025CEB50, app::Byte__Array*, HashFinal_1, (app::MD2Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025CEDC0, void, MD2Transform_1, (app::MD2Managed * this_ptr, app::Byte__Array* state, app::Byte__Array* checksum, app::Byte__Array* block, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025CF150, void, cctor_1, ())
    IL2CPP_REGISTER_METHOD(0x02A3D060, app::Byte__Array*, Padding_2, (app::MD2Managed_1 * this_ptr, int32_t n_length))
    IL2CPP_REGISTER_METHOD(0x02A3D140, void, ctor_2, (app::MD2Managed_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025CE9F0, void, Initialize_2, (app::MD2Managed_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A3D220, void, HashCore_2, (app::MD2Managed_1 * this_ptr, app::Byte__Array* array, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x02A3D320, app::Byte__Array*, HashFinal_2, (app::MD2Managed_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A3D590, void, MD2Transform_2, (app::MD2Managed_1 * this_ptr, app::Byte__Array* state, app::Byte__Array* checksum, app::Byte__Array* block, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02A3D920, void, cctor_2, ())
} // namespace app::classes::Mono::Security::Cryptography::MD2Managed
