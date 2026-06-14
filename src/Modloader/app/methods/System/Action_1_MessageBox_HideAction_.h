#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_MessageBox_HideAction_.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_MessageBox_HideAction_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_1_MessageBox_HideAction_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, app::Action_1_MessageBox_HideAction_* this_ptr, app::MessageBox_HideAction__Enum obj)
} // namespace app::classes::System::Action_1_MessageBox_HideAction_
