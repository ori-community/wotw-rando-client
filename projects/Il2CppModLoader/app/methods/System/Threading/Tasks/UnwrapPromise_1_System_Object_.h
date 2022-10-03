#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Threading::Tasks::UnwrapPromise_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02A5DA30, void, ctor, (app::UnwrapPromise_1_System_Object_ * this_ptr, app::Task* outer_task, bool look_for_oce))
    IL2CPP_REGISTER_METHOD(0x02A5DC30, void, Invoke, (app::UnwrapPromise_1_System_Object_ * this_ptr, app::Task* completing_task))
    IL2CPP_REGISTER_METHOD(0x02A5DDE0, void, InvokeCore, (app::UnwrapPromise_1_System_Object_ * this_ptr, app::Task* completing_task))
    IL2CPP_REGISTER_METHOD(0x02A5DE40, void, InvokeCoreAsync, (app::UnwrapPromise_1_System_Object_ * this_ptr, app::Task* completing_task))
    IL2CPP_REGISTER_METHOD(0x02A5E150, void, ProcessCompletedOuterTask, (app::UnwrapPromise_1_System_Object_ * this_ptr, app::Task* task))
    IL2CPP_REGISTER_METHOD(0x02A5E380, bool, TrySetFromTask, (app::UnwrapPromise_1_System_Object_ * this_ptr, app::Task* task, bool look_for_oce))
    IL2CPP_REGISTER_METHOD(0x02A5E740, void, ProcessInnerTask, (app::UnwrapPromise_1_System_Object_ * this_ptr, app::Task* task))
} // namespace app::classes::System::Threading::Tasks::UnwrapPromise_1_System_Object_
