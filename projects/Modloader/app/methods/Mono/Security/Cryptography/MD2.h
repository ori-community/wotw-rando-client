#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MD2.h>
#include <Modloader/app/structs/MD2_1.h>

namespace app::classes::Mono::Security::Cryptography::MD2 {
    IL2CPP_REGISTER_METHOD(0x020DD3E0, void, ctor_1, (app::MD2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025CE630, app::MD2*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x020DD3E0, void, ctor_2, (app::MD2_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A3CE60, app::MD2_1*, Create_2, ())
} // namespace app::classes::Mono::Security::Cryptography::MD2
