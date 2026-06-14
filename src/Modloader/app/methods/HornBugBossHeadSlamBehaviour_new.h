#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HornBugBossHeadSlamBehaviour_new.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HornBugBossHeadSlamBehaviour_new {
    IL2CPP_REGISTER_METHOD(0x00B64DD0, void, OnEntityInitialized, app::HornBugBossHeadSlamBehaviour_new* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B64E80, void, OnEnter, app::HornBugBossHeadSlamBehaviour_new* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B65040, void, SpawnAreaDamage, app::HornBugBossHeadSlamBehaviour_new* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B65470, void, ctor, app::HornBugBossHeadSlamBehaviour_new* this_ptr)
} // namespace app::classes::HornBugBossHeadSlamBehaviour_new
