#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SwarmEntity.h>
#include <Modloader/app/structs/SwarmPlaceholder.h>

namespace app::classes::SwarmPlaceholder {
    IL2CPP_REGISTER_METHOD(0x010D6940, app::SwarmEntity*, get_SwarmEntity, (app::SwarmPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253E0, void, ClearPrefabLinks, (app::SwarmPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01824E50, void, Spawn, (app::SwarmPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01825460, void, InstantiateInstance, (app::SwarmPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01825470, void, ctor, (app::SwarmPlaceholder * this_ptr))
} // namespace app::classes::SwarmPlaceholder
