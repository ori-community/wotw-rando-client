#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FrogPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0164A2C0, app::FrogEntity *, get_CurrentFrogEntity, (app::FrogPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0164A380, void, Spawn, (app::FrogPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0164A4E0, void, PoolCurrentInstance, (app::FrogPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0164A730, void, InstantiateInstance, (app::FrogPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0164A770, void, ctor, (app::FrogPlaceholder * this_ptr))
}
