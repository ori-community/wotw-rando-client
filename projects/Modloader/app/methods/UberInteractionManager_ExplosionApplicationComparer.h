#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberInteractionManager_ExplosionApplicationComparer.h>
#include <Modloader/app/structs/UberInteractionManager_ExplosionApplication.h>

namespace app::classes::UberInteractionManager_ExplosionApplicationComparer {
    IL2CPP_REGISTER_METHOD(0x013FE7A0, int32_t, Compare, (app::UberInteractionManager_ExplosionApplicationComparer * this_ptr, app::UberInteractionManager_ExplosionApplication a, app::UberInteractionManager_ExplosionApplication b))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberInteractionManager_ExplosionApplicationComparer * this_ptr))
} // namespace app::classes::UberInteractionManager_ExplosionApplicationComparer
