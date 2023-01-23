#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/CounterstrikeEffectPositionOverride.h>

namespace app::classes::CounterstrikeEffectPositionOverride {
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_SpawnPosition, (app::CounterstrikeEffectPositionOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CounterstrikeEffectPositionOverride * this_ptr))
} // namespace app::classes::CounterstrikeEffectPositionOverride
