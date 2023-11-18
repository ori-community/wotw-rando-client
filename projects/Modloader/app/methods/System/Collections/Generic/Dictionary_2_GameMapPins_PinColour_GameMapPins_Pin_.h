#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameMapPins_Pin.h>
#include <Modloader/app/structs/Dictionary_2_GameMapPins_PinColour_GameMapPins_Pin_.h>
#include <Modloader/app/structs/GameMapPins_PinColour__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_GameMapPins_PinColour_GameMapPins_Pin_ {
    IL2CPP_REGISTER_METHOD(0x02C35530, app::GameMapPins_Pin*, get_Item, (app::Dictionary_2_GameMapPins_PinColour_GameMapPins_Pin_ * this_ptr, app::GameMapPins_PinColour__Enum key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_GameMapPins_PinColour_GameMapPins_Pin_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_GameMapPins_PinColour_GameMapPins_Pin_ * this_ptr, app::GameMapPins_PinColour__Enum key, app::GameMapPins_Pin* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_GameMapPins_PinColour_GameMapPins_Pin_
