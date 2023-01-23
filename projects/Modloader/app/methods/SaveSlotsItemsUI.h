#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SaveSlotsItemsUI.h>

namespace app::classes::SaveSlotsItemsUI {
    IL2CPP_REGISTER_METHOD(0x00926E20, void, Awake, (app::SaveSlotsItemsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00926F40, void, OnEnable, (app::SaveSlotsItemsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00926F50, void, Refresh, (app::SaveSlotsItemsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00927000, void, RefreshItem, (app::SaveSlotsItemsUI * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00927750, void, UpdateScroll, (app::SaveSlotsItemsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00927920, void, SetScrollFromIndex, (app::SaveSlotsItemsUI * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00927940, void, SetScrollFromIndexNow, (app::SaveSlotsItemsUI * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x008682A0, float, get_TargetScroll, (app::SaveSlotsItemsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00927AC0, void, set_TargetScroll, (app::SaveSlotsItemsUI * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00927BB0, void, ResetPositions, (app::SaveSlotsItemsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00927DD0, void, ctor, (app::SaveSlotsItemsUI * this_ptr))
} // namespace app::classes::SaveSlotsItemsUI
