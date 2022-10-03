#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GhostAnimationParameterPlugin_FloatParamenterTracker {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::FloatAnimationParameter*, get_Parameter, (app::GhostAnimationParameterPlugin_FloatParamenterTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Parameter, (app::GhostAnimationParameterPlugin_FloatParamenterTracker * this_ptr, app::FloatAnimationParameter* value))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_LastValue, (app::GhostAnimationParameterPlugin_FloatParamenterTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_LastValue, (app::GhostAnimationParameterPlugin_FloatParamenterTracker * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_ValueChanged, (app::GhostAnimationParameterPlugin_FloatParamenterTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_ValueChanged, (app::GhostAnimationParameterPlugin_FloatParamenterTracker * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00E14010, app::String*, get_GUID, (app::GhostAnimationParameterPlugin_FloatParamenterTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::GhostAnimationParameterPlugin_FloatParamenterTracker * this_ptr, app::FloatAnimationParameter* parameter))
    IL2CPP_REGISTER_METHOD(0x00E14090, float, CurrentValue, (app::GhostAnimationParameterPlugin_FloatParamenterTracker * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x00E140D0, void, Refresh, (app::GhostAnimationParameterPlugin_FloatParamenterTracker * this_ptr, app::MoonAnimator* animator, bool force_recording))
} // namespace app::classes::GhostAnimationParameterPlugin_FloatParamenterTracker
