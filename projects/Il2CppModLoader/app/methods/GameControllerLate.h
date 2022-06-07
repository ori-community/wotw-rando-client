#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GameControllerLate {
    IL2CPP_REGISTER_METHOD(0x0069C710, app::IEnumerator *, Start, (app::GameControllerLate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069C860, void, OnDestroy, (app::GameControllerLate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069C890, app::IEnumerator *, OnEndOfFrame, (app::GameControllerLate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069C9E0, void, FixedUpdate, (app::GameControllerLate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069CB10, void, InjectToPlayerLoopLate, (app::PlayerLoopSystem * loop))
    IL2CPP_REGISTER_METHOD(0x0069CD40, void, UpdateAfterParticlesUpdateCallback, ())
    IL2CPP_REGISTER_METHODINFO(0x04797C18, GameControllerLate_UpdateAfterParticlesUpdateCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0069CEC0, void, ctor, (app::GameControllerLate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069D0D0, void, cctor, ())
}
