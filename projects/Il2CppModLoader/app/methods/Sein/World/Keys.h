#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Sein::World::Keys {
    IL2CPP_REGISTER_METHOD(0x01071DA0, bool, get_GinsoTree, ())
    IL2CPP_REGISTER_METHOD(0x01071E90, void, set_GinsoTree, (bool value))
    IL2CPP_REGISTER_METHOD(0x01071F80, bool, get_ForlornRuins, ())
    IL2CPP_REGISTER_METHOD(0x01072070, void, set_ForlornRuins, (bool value))
    IL2CPP_REGISTER_METHOD(0x01072160, bool, get_MountHoru, ())
    IL2CPP_REGISTER_METHOD(0x01072250, void, set_MountHoru, (bool value))
} // namespace app::classes::Sein::World::Keys
