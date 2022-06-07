#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FovZoneModifier {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_VisibleOnInspector, (app::FovZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_VisibleOnInspector, (app::FovZoneModifier * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00CFC770, bool, get_FOVInfluencerIsValid, (app::FovZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_FOVInfluencerWeight, (app::FovZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_FOVInfluencerWeight, (app::FovZoneModifier * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_FOVInfluencerOffset, (app::FovZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01281A00, float, get_FOVInfluencerTargetZ, (app::FovZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01281B80, void, InitializeModifier, (app::FovZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01281C20, void, CleanUpModifier, (app::FovZoneModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, UpdateModifier, (app::FovZoneModifier * this_ptr, float weight, float delta_time))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FovZoneModifier * this_ptr))
}
