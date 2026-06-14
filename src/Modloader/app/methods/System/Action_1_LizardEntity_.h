#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_LizardEntity_.h>
#include <Modloader/app/structs/LizardEntity.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_LizardEntity_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_1_LizardEntity_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, app::Action_1_LizardEntity_* this_ptr, app::LizardEntity* obj)
} // namespace app::classes::System::Action_1_LizardEntity_
