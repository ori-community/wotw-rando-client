#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::OriInterestTriggerB {
    IL2CPP_REGISTER_METHOD(0x0043C150, bool, get_OnButtonPressed, (app::OriInterestTriggerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C220, app::Rect, get_Bounds, (app::OriInterestTriggerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C3A0, void, Awake, (app::OriInterestTriggerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C410, bool, get_SeinInRange, (app::OriInterestTriggerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C7C0, bool, get_OriHasTargets, (app::OriInterestTriggerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C8E0, void, FixedUpdate, (app::OriInterestTriggerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043CEF0, void, Highlight, (app::OriInterestTriggerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D490, void, Unhighlight, (app::OriInterestTriggerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D980, void, OnDisable, (app::OriInterestTriggerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::OriInterestTriggerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9B0, void, Serialize, (app::OriInterestTriggerB * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0043C130, void, ctor, (app::OriInterestTriggerB * this_ptr))
} // namespace app::classes::OriInterestTriggerB
