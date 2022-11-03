#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncMethodBuilderCore {
    IL2CPP_REGISTER_METHOD(0x0018ED60, void, SetStateMachine, (app::AsyncMethodBuilderCore__Boxed * this_ptr, app::IAsyncStateMachine* state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047848E8, AsyncMethodBuilderCore_SetStateMachine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0018ED70, app::Action*, GetCompletionAction, (app::AsyncMethodBuilderCore__Boxed * this_ptr, app::Task* task_for_tracing, app::AsyncMethodBuilderCore_MoveNextRunner** runner_to_initialize))
    IL2CPP_REGISTER_METHOD(0x0018ED80, app::Action*, OutputAsyncCausalityEvents, (app::AsyncMethodBuilderCore__Boxed * this_ptr, app::Task* inner_task, app::Action* continuation))
    IL2CPP_REGISTER_METHOD(0x0018ED90, void, PostBoxInitialization, (app::AsyncMethodBuilderCore__Boxed * this_ptr, app::IAsyncStateMachine* state_machine, app::AsyncMethodBuilderCore_MoveNextRunner* runner, app::Task* built_task))
    IL2CPP_REGISTER_METHOD(0x01A90650, void, ThrowAsync, (app::Exception * exception, app::SynchronizationContext* target_context))
    IL2CPP_REGISTER_METHOD(0x01A90B00, app::Action*, CreateContinuationWrapper, (app::Action * continuation, app::Action* invoke_action, app::Task* inner_task))
    IL2CPP_REGISTER_METHOD(0x01A90DF0, app::Task*, TryGetContinuationTask, (app::Action * action))
} // namespace app::classes::System::Runtime::CompilerServices::AsyncMethodBuilderCore
