#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MenuScreen.h>
#include <Modloader/app/structs/Func_1_MenuScreen_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_1_MenuScreen_ {
    IL2CPP_REGISTER_METHOD(0x01938310, app::MenuScreen*, Invoke, (app::Func_1_MenuScreen_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_1_MenuScreen_ * this_ptr, app::Object* object, void* method_1))
} // namespace app::classes::System::Func_1_MenuScreen_
