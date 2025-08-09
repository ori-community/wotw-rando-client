#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameMapPins.h>
#include <Modloader/app/structs/GameMapPins_Pin.h>
#include <Modloader/app/structs/GameMapPins_PinColour__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_GameMapPins_Pin_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GameMapPins {
    IL2CPP_REGISTER_METHOD(0x0069E090, app::GameObject*, GetPinObject, app::GameMapPins* this_ptr, app::GameMapPins_PinColour__Enum pin)
    IL2CPP_REGISTER_METHOD(0x0069E290, void, AddPinObject, app::GameMapPins* this_ptr, app::GameMapPins_PinColour__Enum color, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x0069E350, app::List_1_GameMapPins_Pin_*, get_SavedPins, app::GameMapPins* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069E410, void, set_SavedPins, app::GameMapPins* this_ptr, app::List_1_GameMapPins_Pin_* value)
    IL2CPP_REGISTER_METHOD(0x0069E4E0, void, Awake, app::GameMapPins* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069E590, void, UpdatePinsOnMap, app::GameMapPins* this_ptr, bool visible)
    IL2CPP_REGISTER_METHOD(0x0069EBE0, void, AddPin, app::GameMapPins* this_ptr, app::GameMapPins_PinColour__Enum p, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LateUpdate, app::GameMapPins* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069EF90, void, RemovePin, app::GameMapPins* this_ptr, app::GameMapPins_Pin* pin)
    IL2CPP_REGISTER_METHOD(0x0069F160, app::Vector2, DoCursorSelectionSnap, app::GameMapPins* this_ptr, app::Vector2 cursor_map_coords)
    IL2CPP_REGISTER_METHOD(0x0069F380, app::GameMapPins_Pin*, GetPinUnderCursor, app::GameMapPins* this_ptr, app::Vector2 cursor_position)
    IL2CPP_REGISTER_METHOD(0x0069F540, app::GameMapPins_Pin*, GetFirstPinMatchingColor, app::GameMapPins* this_ptr, app::GameMapPins_PinColour__Enum colour)
    IL2CPP_REGISTER_METHOD(0x0069F790, app::GameMapPins_Pin*, GetNearestPin, app::GameMapPins* this_ptr, app::Vector2 cursor_position)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, app::GameMapPins* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_ApplyOnEditor, app::GameMapPins* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_ApplyOnEditor, app::GameMapPins* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0069FA50, app::IUberState__Array*, get_AffectingUberStates, app::GameMapPins* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069FB40, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::GameMapPins* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069FD00, void, ctor, app::GameMapPins* this_ptr)
} // namespace app::classes::GameMapPins
