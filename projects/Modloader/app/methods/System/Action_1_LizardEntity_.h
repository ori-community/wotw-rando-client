#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_LizardEntity_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/LizardEntity.h>

namespace app::classes::System::Action_1_LizardEntity_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_LizardEntity_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047820C0, Action_1_LizardEntity___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_LizardEntity_ * this_ptr, app::LizardEntity* obj))
    IL2CPP_REGISTER_METHODINFO(0x04761B20, Action_1_LizardEntity__Invoke__MethodInfo)
} // namespace app::classes::System::Action_1_LizardEntity_
