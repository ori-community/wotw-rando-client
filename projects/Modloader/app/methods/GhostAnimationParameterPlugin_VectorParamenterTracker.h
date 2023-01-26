#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VectorAnimationParameter.h>
#include <Modloader/app/structs/GhostAnimationParameterPlugin_VectorParamenterTracker.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GhostAnimationParameterPlugin_VectorParamenterTracker {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::VectorAnimationParameter*, get_Parameter, (app::GhostAnimationParameterPlugin_VectorParamenterTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Parameter, (app::GhostAnimationParameterPlugin_VectorParamenterTracker * this_ptr, app::VectorAnimationParameter* value))
    IL2CPP_REGISTER_METHOD(0x0064EB90, app::Vector3, get_LastValue, (app::GhostAnimationParameterPlugin_VectorParamenterTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E15170, void, set_LastValue, (app::GhostAnimationParameterPlugin_VectorParamenterTracker * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_ValueChanged, (app::GhostAnimationParameterPlugin_VectorParamenterTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC410, void, set_ValueChanged, (app::GhostAnimationParameterPlugin_VectorParamenterTracker * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00E15180, app::String*, get_GUID, (app::GhostAnimationParameterPlugin_VectorParamenterTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::GhostAnimationParameterPlugin_VectorParamenterTracker * this_ptr, app::VectorAnimationParameter* parameter))
    IL2CPP_REGISTER_METHOD(0x00E15200, app::Vector3, CurrentValue, (app::GhostAnimationParameterPlugin_VectorParamenterTracker * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x00E15260, void, Refresh, (app::GhostAnimationParameterPlugin_VectorParamenterTracker * this_ptr, app::MoonAnimator* animator, bool force_recording))
} // namespace app::classes::GhostAnimationParameterPlugin_VectorParamenterTracker
