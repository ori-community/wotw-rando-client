#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_IHoldable_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IHoldable.h>

namespace app::classes::System::Action_1_IHoldable_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_IHoldable_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0476A8A0, Action_1_IHoldable___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_IHoldable_ * this_ptr, app::IHoldable* obj))
    IL2CPP_REGISTER_METHODINFO(0x04775BB8, Action_1_IHoldable__Invoke__MethodInfo)
} // namespace app::classes::System::Action_1_IHoldable_
