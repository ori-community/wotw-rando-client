#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonEffectPools.h>

namespace app::classes::MoonEffectPools {
    IL2CPP_REGISTER_METHOD(0x030CB6F0, void, ClearAllDataPools, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonEffectPools* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030CBA10, void, cctor, )
} // namespace app::classes::MoonEffectPools
