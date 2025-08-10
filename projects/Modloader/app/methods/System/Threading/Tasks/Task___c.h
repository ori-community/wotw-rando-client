#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_ContingentProperties.h>
#include <Modloader/app/structs/Task_c.h>

namespace app::classes::System::Threading::Tasks::Task___c {
    IL2CPP_REGISTER_METHOD(0x0233A930, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Task_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0233AA70, void, _Delay_b__276_0, app::Task_c* this_ptr, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x0233AB20, void, _Delay_b__276_1, app::Task_c* this_ptr, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x0233ABD0, app::Task_ContingentProperties*, __cctor_b__295_0, app::Task_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0233AD10, bool, __cctor_b__295_1, app::Task_c* this_ptr, app::Task* t)
    IL2CPP_REGISTER_METHOD(0x00D4A040, bool, __cctor_b__295_2, app::Task_c* this_ptr, app::Object* tc)
} // namespace app::classes::System::Threading::Tasks::Task___c
