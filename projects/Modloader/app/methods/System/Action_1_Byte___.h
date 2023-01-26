#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Byte_.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_Byte___ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_Byte_ * this_ptr, app::Byte__Array* obj))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Byte_ * this_ptr, app::Object* object, void* method_1))
} // namespace app::classes::System::Action_1_Byte___
