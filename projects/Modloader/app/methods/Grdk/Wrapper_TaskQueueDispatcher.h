#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Wrapper_TaskQueueDispatcher.h>

namespace app::classes::Grdk::Wrapper_TaskQueueDispatcher {
    IL2CPP_REGISTER_METHOD(0x0108AF10, void, Update, (app::Wrapper_TaskQueueDispatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Wrapper_TaskQueueDispatcher * this_ptr))
} // namespace app::classes::Grdk::Wrapper_TaskQueueDispatcher
