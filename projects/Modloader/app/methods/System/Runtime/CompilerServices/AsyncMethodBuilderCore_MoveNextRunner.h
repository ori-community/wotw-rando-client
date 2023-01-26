#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncMethodBuilderCore_MoveNextRunner.h>
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::AsyncMethodBuilderCore_MoveNextRunner * this_ptr, app::ExecutionContext* context, app::IAsyncStateMachine* state_machine))
    IL2CPP_REGISTER_METHOD(0x01A91210, void, Run, (app::AsyncMethodBuilderCore_MoveNextRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A91470, void, InvokeMoveNext, (app::Object * state_machine))
} // namespace app::classes::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner
