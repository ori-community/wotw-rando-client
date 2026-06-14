#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameMapSavePedestal.h>
#include <Modloader/app/structs/GameMapSavePedestals.h>
#include <Modloader/app/structs/List_1_GameMapSavePedestal_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::GameMapSavePedestals {
    IL2CPP_REGISTER_METHOD(0x006A1160, app::List_1_GameMapSavePedestal_*, get_Pedestals, app::GameMapSavePedestals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A1240, void, ShowPedestals, app::GameMapSavePedestals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A13A0, void, HidePedestals, app::GameMapSavePedestals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A1500, void, ChangeSelection, app::GameMapSavePedestals* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x006A17D0, int32_t, TeleporterUnderMouse, app::GameMapSavePedestals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A1A30, void, AdvanceAreaMap, app::GameMapSavePedestals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A1D50, void, Advance, app::GameMapSavePedestals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A22C0, void, OnDisable, app::GameMapSavePedestals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A2440, app::GameMapSavePedestal*, get_SelectedPedestal, app::GameMapSavePedestals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A24E0, void, Select, app::GameMapSavePedestals* this_ptr, app::String* identifier)
    IL2CPP_REGISTER_METHOD(0x006A2770, void, SetOriginIndex, app::GameMapSavePedestals* this_ptr, app::String* identifier)
    IL2CPP_REGISTER_METHOD(0x006A29F0, void, ResetOriginIndex, app::GameMapSavePedestals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A2A00, bool, HasOriginIndex, app::GameMapSavePedestals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A2A10, app::String*, GetIdentifierForIndex, app::GameMapSavePedestals* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x006A2B00, void, SetIndex, app::GameMapSavePedestals* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x006A2E70, void, ctor, app::GameMapSavePedestals* this_ptr)
} // namespace app::classes::GameMapSavePedestals
