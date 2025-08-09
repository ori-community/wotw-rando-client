#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_SeinController3D_EventId_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>

namespace app::classes::System::Action_1_SeinController3D_EventId_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_1_SeinController3D_EventId_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, app::Action_1_SeinController3D_EventId_* this_ptr, app::SeinController3D_EventId__Enum obj)
} // namespace app::classes::System::Action_1_SeinController3D_EventId_
