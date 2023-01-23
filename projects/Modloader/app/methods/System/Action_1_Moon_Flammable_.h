#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_Moon_Flammable_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Flammable.h>

namespace app::classes::System::Action_1_Moon_Flammable_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Moon_Flammable_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047666F0, Action_1_Moon_Flammable___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_Moon_Flammable_ * this_ptr, app::Flammable* obj))
    IL2CPP_REGISTER_METHODINFO(0x0471FAC0, Action_1_Moon_Flammable__Invoke__MethodInfo)
} // namespace app::classes::System::Action_1_Moon_Flammable_
