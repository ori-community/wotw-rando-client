#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_2_System_Threading_Tasks_Task_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::System::Action_2_System_Threading_Tasks_Task_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_System_Threading_Tasks_Task_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0476A5A8, Action_2_System_Threading_Tasks_Task_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (app::Action_2_System_Threading_Tasks_Task_Object_ * this_ptr, app::Task* arg1, app::Object* arg2))
    IL2CPP_REGISTER_METHODINFO(0x0472AD48, Action_2_System_Threading_Tasks_Task_Object__Invoke__MethodInfo)
} // namespace app::classes::System::Action_2_System_Threading_Tasks_Task_Object_
