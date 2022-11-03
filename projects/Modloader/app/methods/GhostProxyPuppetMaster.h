#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GhostProxyPuppetMaster {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::CharacterAnimationSystem*, IPuppetBase_get_Animation, (app::GhostProxyPuppetMaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DF790, app::MoonAnimator*, get_Animator, (app::GhostProxyPuppetMaster * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472F428, GhostProxyPuppetMaster_get_Animator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::SoundHost*, get_SoundHost, (app::GhostProxyPuppetMaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GhostProxyPuppetMaster * this_ptr))
} // namespace app::classes::GhostProxyPuppetMaster
