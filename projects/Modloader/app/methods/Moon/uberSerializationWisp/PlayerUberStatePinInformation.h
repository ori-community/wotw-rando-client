#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerUberStatePinInformation.h>
#include <Modloader/app/structs/GameMapPins_PinColour__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/List_1_GameMapPins_Pin_.h>
#include <Modloader/app/structs/UberStateArchive.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/NavigableOnGUI.h>
#include <Modloader/app/structs/GameMapPins_Pin.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberStatePinInformation {
    IL2CPP_REGISTER_METHOD(0x00F3ED30, void, SetPinActiveState, (app::PlayerUberStatePinInformation * this_ptr, app::GameMapPins_PinColour__Enum color, bool state))
    IL2CPP_REGISTER_METHOD(0x00F3EDF0, bool, GetPinActiveState, (app::PlayerUberStatePinInformation * this_ptr, app::GameMapPins_PinColour__Enum color))
    IL2CPP_REGISTER_METHOD(0x00F3EEA0, void, SetPinLocation, (app::PlayerUberStatePinInformation * this_ptr, app::GameMapPins_PinColour__Enum color, app::Vector2 location))
    IL2CPP_REGISTER_METHOD(0x00F3EF70, app::Vector2, GetPinLocation, (app::PlayerUberStatePinInformation * this_ptr, app::GameMapPins_PinColour__Enum color))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::List_1_GameMapPins_Pin_*, GetPins, (app::PlayerUberStatePinInformation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3F030, void, SetPins, (app::PlayerUberStatePinInformation * this_ptr, app::List_1_GameMapPins_Pin_* pins))
    IL2CPP_REGISTER_METHOD(0x00F3F200, void, Save, (app::PlayerUberStatePinInformation * this_ptr, app::UberStateArchive* archive, app::PlayerUberStatePinInformation* pin_info))
    IL2CPP_REGISTER_METHOD(0x00F3F460, void, Load, (app::PlayerUberStatePinInformation * this_ptr, app::UberStateArchive* archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x00F3F6F0, void, ctor, (app::PlayerUberStatePinInformation * this_ptr, app::Action* dirty_call_back))
    IL2CPP_REGISTER_METHOD(0x00F3FDB0, void, OnGui, (app::PlayerUberStatePinInformation * this_ptr, app::NavigableOnGUI* gui))
    IL2CPP_REGISTER_METHOD(0x00F400E0, int64_t, get_Size, (app::PlayerUberStatePinInformation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F402C0, void, RunSetDirtyCallback, (app::PlayerUberStatePinInformation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F40450, app::GameMapPins_Pin*, GetPin, (app::PlayerUberStatePinInformation * this_ptr, app::GameMapPins_PinColour__Enum color))
    IL2CPP_REGISTER_METHOD(0x00F404F0, void, cctor, ())
} // namespace app::classes::Moon::uberSerializationWisp::PlayerUberStatePinInformation
