#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EOverlayDirection__Enum.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_MoveGamepadFocusToNeighbor.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__MoveGamepadFocusToNeighbor {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_MoveGamepadFocusToNeighbor* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x00F51B50,
        app::EVROverlayError__Enum,
        Invoke,
        app::IVROverlay_MoveGamepadFocusToNeighbor* this_ptr,
        app::EOverlayDirection__Enum e_direction,
        uint64_t ul_from
    )
    IL2CPP_REGISTER_METHOD(
        0x02D7DD80,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_MoveGamepadFocusToNeighbor* this_ptr,
        app::EOverlayDirection__Enum e_direction,
        uint64_t ul_from,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, app::IVROverlay_MoveGamepadFocusToNeighbor* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__MoveGamepadFocusToNeighbor
