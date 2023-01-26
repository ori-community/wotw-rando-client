#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_BuyMapUIConfirmationOverlay_Selection_.h>
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay_Selection__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_BuyMapUIConfirmationOverlay_Selection_ {
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::Action_1_BuyMapUIConfirmationOverlay_Selection_ * this_ptr, app::BuyMapUIConfirmationOverlay_Selection__Enum obj))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_BuyMapUIConfirmationOverlay_Selection_ * this_ptr, app::Object* object, void* method_1))
} // namespace app::classes::System::Action_1_BuyMapUIConfirmationOverlay_Selection_
