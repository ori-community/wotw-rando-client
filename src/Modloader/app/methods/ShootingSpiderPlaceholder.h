#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/ShootingSpiderPlaceholder.h>

namespace app::classes::ShootingSpiderPlaceholder {
    IL2CPP_REGISTER_METHOD(0x005BD1D0, app::LegacyEntity*, Instantiate, app::ShootingSpiderPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005BD920, void, ctor, app::ShootingSpiderPlaceholder* this_ptr)
} // namespace app::classes::ShootingSpiderPlaceholder
