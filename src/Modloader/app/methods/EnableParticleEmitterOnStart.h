#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnableParticleEmitterOnStart.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::EnableParticleEmitterOnStart {
    IL2CPP_REGISTER_METHOD(0x00BFCBE0, void, Awake, app::EnableParticleEmitterOnStart* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BFCCC0, app::IEnumerator*, Start, app::EnableParticleEmitterOnStart* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::EnableParticleEmitterOnStart* this_ptr)
} // namespace app::classes::EnableParticleEmitterOnStart
