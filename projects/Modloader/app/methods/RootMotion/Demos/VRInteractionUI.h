#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::Demos::VRInteractionUI {
    IL2CPP_REGISTER_METHOD(0x0204C1E0, void, Start, (app::VRInteractionUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204C290, void, Update, (app::VRInteractionUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204C2B0, void, UpdateInteractionSlider, (app::VRInteractionUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204C960, void, UpdateCursor, (app::VRInteractionUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204CCA0, void, SetSliderAlpha, (app::VRInteractionUI * this_ptr, float a))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VRInteractionUI * this_ptr))
} // namespace app::classes::RootMotion::Demos::VRInteractionUI
