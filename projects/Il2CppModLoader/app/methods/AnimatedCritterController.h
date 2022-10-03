#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AnimatedCritterController {
    IL2CPP_REGISTER_METHOD(0x004FAA70, app::AnimatedCritter*, get_CurrentCritter, (app::AnimatedCritterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_CritterIndex, (app::AnimatedCritterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FAB10, void, set_CritterIndex, (app::AnimatedCritterController * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (app::AnimatedCritterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FABE0, void, Update, (app::AnimatedCritterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FAEA0, void, UpdateTriggerSize, (app::AnimatedCritterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FB9E0, void, CollectCritters, (app::AnimatedCritterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_InvalidateParentTimelineCache, (app::AnimatedCritterController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_InvalidateParentTimelineCache, (app::AnimatedCritterController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004FBAE0, void, ctor, (app::AnimatedCritterController * this_ptr))
} // namespace app::classes::AnimatedCritterController
