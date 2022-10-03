#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::QuestIndicator {
    IL2CPP_REGISTER_METHOD(0x00E8A800, bool, get_HasActiveQuest, (app::QuestIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanShowQuest, (app::QuestIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowIndicator, (app::QuestIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E8A8E0, app::Vector3, get_TargetPositon, (app::QuestIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_RotateIndicator, (app::QuestIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ScaleByDistance, (app::QuestIndicator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00723FF0, void, ctor, (app::QuestIndicator * this_ptr))
} // namespace app::classes::QuestIndicator
