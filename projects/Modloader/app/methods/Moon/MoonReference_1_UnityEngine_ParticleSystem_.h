#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonReference_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/ParticleSystem.h>

namespace app::classes::Moon::MoonReference_1_UnityEngine_ParticleSystem_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_UnityEngine_ParticleSystem_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::ParticleSystem*, Resolve, (app::MoonReference_1_UnityEngine_ParticleSystem_ * this_ptr, app::IMoonResolverContext* context))
} // namespace app::classes::Moon::MoonReference_1_UnityEngine_ParticleSystem_
