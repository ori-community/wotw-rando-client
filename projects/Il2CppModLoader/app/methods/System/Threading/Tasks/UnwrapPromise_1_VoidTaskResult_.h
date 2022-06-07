#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::UnwrapPromise_1_VoidTaskResult_ {
    IL2CPP_REGISTER_METHOD(0x02A5E7F0, void, ctor, (app::UnwrapPromise_1_VoidTaskResult_ * this_ptr, app::Task * outer_task, bool look_for_oce))
    IL2CPP_REGISTER_METHODINFO(0x04791548, UnwrapPromise_1_VoidTaskResult___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A5E9F0, void, Invoke, (app::UnwrapPromise_1_VoidTaskResult_ * this_ptr, app::Task * completing_task))
    IL2CPP_REGISTER_METHOD(0x02A5DDE0, void, InvokeCore, (app::UnwrapPromise_1_VoidTaskResult_ * this_ptr, app::Task * completing_task))
    IL2CPP_REGISTER_METHOD(0x02A5EBA0, void, InvokeCoreAsync, (app::UnwrapPromise_1_VoidTaskResult_ * this_ptr, app::Task * completing_task))
    IL2CPP_REGISTER_METHOD(0x02A5EEB0, void, ProcessCompletedOuterTask, (app::UnwrapPromise_1_VoidTaskResult_ * this_ptr, app::Task * task))
    IL2CPP_REGISTER_METHOD(0x02A5F0E0, bool, TrySetFromTask, (app::UnwrapPromise_1_VoidTaskResult_ * this_ptr, app::Task * task, bool look_for_oce))
    IL2CPP_REGISTER_METHOD(0x02A5E740, void, ProcessInnerTask, (app::UnwrapPromise_1_VoidTaskResult_ * this_ptr, app::Task * task))
}
