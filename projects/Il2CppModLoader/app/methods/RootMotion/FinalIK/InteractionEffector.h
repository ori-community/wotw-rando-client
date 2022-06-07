#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::InteractionEffector {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::FullBodyBipedEffector__Enum, get_effectorType, (app::InteractionEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_effectorType, (app::InteractionEffector * this_ptr, app::FullBodyBipedEffector__Enum value))
    IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_isPaused, (app::InteractionEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EA280, void, set_isPaused, (app::InteractionEffector * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::InteractionObject *, get_interactionObject, (app::InteractionEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_interactionObject, (app::InteractionEffector * this_ptr, app::InteractionObject * value))
    IL2CPP_REGISTER_METHOD(0x02A07140, bool, get_inInteraction, (app::InteractionEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A071E0, void, ctor, (app::InteractionEffector * this_ptr, app::FullBodyBipedEffector__Enum effector_type))
    IL2CPP_REGISTER_METHOD(0x02A073F0, void, Initiate, (app::InteractionEffector * this_ptr, app::InteractionSystem * interaction_system))
    IL2CPP_REGISTER_METHOD(0x02A074F0, void, StoreDefaults, (app::InteractionEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A07730, bool, ResetToDefaults, (app::InteractionEffector * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x02A07D90, bool, Pause, (app::InteractionEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A08120, bool, Resume, (app::InteractionEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A08180, bool, Start, (app::InteractionEffector * this_ptr, app::InteractionObject * interaction_object, app::String * tag, float fade_in_time, bool interrupt))
    IL2CPP_REGISTER_METHOD(0x02A089E0, void, Update, (app::InteractionEffector * this_ptr, app::Transform * root, float speed))
    IL2CPP_REGISTER_METHOD(0x02A09720, float, get_progress, (app::InteractionEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A09760, void, TriggerUntriggeredEvents, (app::InteractionEffector * this_ptr, bool check_time, bool * pick_up, bool * pause))
    IL2CPP_REGISTER_METHOD(0x02A09B60, void, PickUp, (app::InteractionEffector * this_ptr, app::Transform * root))
    IL2CPP_REGISTER_METHOD(0x02A09E90, bool, Stop, (app::InteractionEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0A160, void, OnPostFBBIK, (app::InteractionEffector * this_ptr))
}
