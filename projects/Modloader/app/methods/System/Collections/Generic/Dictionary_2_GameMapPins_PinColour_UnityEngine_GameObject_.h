#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/GameMapPins_PinColour__Enum.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_* this_ptr,
        app::GameMapPins_PinColour__Enum key,
        app::GameObject** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_* this_ptr,
        app::GameMapPins_PinColour__Enum key,
        app::GameObject* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02C35530,
        app::GameObject*,
        get_Item,
        app::Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_* this_ptr,
        app::GameMapPins_PinColour__Enum key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_
