#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AmbientSoundZone {
    IL2CPP_REGISTER_METHOD(0x004F8FB0, void, Awake, (app::AmbientSoundZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F9140, void, Start, (app::AmbientSoundZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F91E0, void, OnDestroy, (app::AmbientSoundZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F9340, void, OnTriggerEnter, (app::AmbientSoundZone * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x004F9510, void, OnTriggerExit, (app::AmbientSoundZone * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x004F9770, void, OnSceneWasLoaded, (app::AmbientSoundZone * this_ptr, app::Scene scene, app::LoadSceneMode__Enum mode))
    IL2CPP_REGISTER_METHODINFO(0x047192B0, AmbientSoundZone_OnSceneWasLoaded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F9930, void, Update, (app::AmbientSoundZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F9B70, void, ctor, (app::AmbientSoundZone * this_ptr))
} // namespace app::classes::AmbientSoundZone
