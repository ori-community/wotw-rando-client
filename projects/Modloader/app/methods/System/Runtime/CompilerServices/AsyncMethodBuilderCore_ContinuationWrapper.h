#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncMethodBuilderCore_ContinuationWrapper.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper {
    IL2CPP_REGISTER_METHOD(0x01A91110, void, ctor, (app::AsyncMethodBuilderCore_ContinuationWrapper * this_ptr, app::Action* continuation, app::Action* invoke_action, app::Task* inner_task))
    IL2CPP_REGISTER_METHOD(0x00B8BEC0, void, Invoke, (app::AsyncMethodBuilderCore_ContinuationWrapper * this_ptr))
} // namespace app::classes::System::Runtime::CompilerServices::AsyncMethodBuilderCore_ContinuationWrapper
