#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_System_Threading_Tasks_Task_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::System::Action_2_System_Threading_Tasks_Task_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_2_System_Threading_Tasks_Task_Object_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, app::Action_2_System_Threading_Tasks_Task_Object_* this_ptr, app::Task* arg1, app::Object* arg2)
} // namespace app::classes::System::Action_2_System_Threading_Tasks_Task_Object_
