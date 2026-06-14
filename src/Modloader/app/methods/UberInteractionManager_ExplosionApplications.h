#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberInteractionManager_ExplosionApplications.h>

namespace app::classes::UberInteractionManager_ExplosionApplications {
    IL2CPP_REGISTER_METHOD(0x013FE810, bool, get_IsFull, app::UberInteractionManager_ExplosionApplications* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013FE820, void, ctor, app::UberInteractionManager_ExplosionApplications* this_ptr)
} // namespace app::classes::UberInteractionManager_ExplosionApplications
