#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::AsyncMethodBuilderCore_MoveNextRunner * this_ptr, app::ExecutionContext* context, app::IAsyncStateMachine* state_machine))
    IL2CPP_REGISTER_METHOD(0x01A91210, void, Run, (app::AsyncMethodBuilderCore_MoveNextRunner * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777A90, AsyncMethodBuilderCore_MoveNextRunner_Run__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A91470, void, InvokeMoveNext, (app::Object * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0476E6D8, AsyncMethodBuilderCore_MoveNextRunner_InvokeMoveNext__MethodInfo)
} // namespace app::classes::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner
