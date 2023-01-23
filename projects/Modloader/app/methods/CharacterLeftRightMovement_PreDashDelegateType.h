#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharacterLeftRightMovement_PreDashDelegateType.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::CharacterLeftRightMovement_PreDashDelegateType {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CharacterLeftRightMovement_PreDashDelegateType * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::CharacterLeftRightMovement_PreDashDelegateType * this_ptr, app::CharacterLeftRightMovement* left_right_movement))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::CharacterLeftRightMovement_PreDashDelegateType * this_ptr, app::CharacterLeftRightMovement* left_right_movement, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::CharacterLeftRightMovement_PreDashDelegateType * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::CharacterLeftRightMovement_PreDashDelegateType
