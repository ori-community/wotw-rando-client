#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::SystemThreadingTasks_TaskDebugView {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::SystemThreadingTasks_TaskDebugView * this_ptr, app::Task * task))
    IL2CPP_REGISTER_METHOD(0x00571730, app::Object *, get_AsyncState, (app::SystemThreadingTasks_TaskDebugView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02330660, app::TaskCreationOptions__Enum, get_CreationOptions, (app::SystemThreadingTasks_TaskDebugView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02330690, app::Exception *, get_Exception, (app::SystemThreadingTasks_TaskDebugView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023306D0, int32_t, get_Id, (app::SystemThreadingTasks_TaskDebugView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023306F0, bool, get_CancellationPending, (app::SystemThreadingTasks_TaskDebugView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02330770, app::TaskStatus__Enum, get_Status, (app::SystemThreadingTasks_TaskDebugView * this_ptr))
}
