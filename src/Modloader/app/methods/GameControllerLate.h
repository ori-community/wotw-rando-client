#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameControllerLate.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/PlayerLoopSystem.h>

namespace app::classes::GameControllerLate {
    IL2CPP_REGISTER_METHOD(0x0069C710, app::IEnumerator*, Start, app::GameControllerLate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069C860, void, OnDestroy, app::GameControllerLate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069C890, app::IEnumerator*, OnEndOfFrame, app::GameControllerLate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069C9E0, void, FixedUpdate, app::GameControllerLate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069CB10, void, InjectToPlayerLoopLate, app::PlayerLoopSystem* loop)
    IL2CPP_REGISTER_METHOD(0x0069CD40, void, UpdateAfterParticlesUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x0069CEC0, void, ctor, app::GameControllerLate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069D0D0, void, cctor, )
} // namespace app::classes::GameControllerLate
