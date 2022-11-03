#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::StackGuard {
    IL2CPP_REGISTER_METHOD(0x02FBFB20, bool, TryEnterOnCurrentStack, (app::StackGuard_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472A378, StackGuard_1_TryEnterOnCurrentStack__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StackGuard_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AF1250, void, RunOnEmptyStack_1, (app::StackGuard_1 * this_ptr, app::Action_2_Object_Object_* action, app::Object* arg1, app::Object* arg2))
    IL2CPP_REGISTER_METHOD(0x018F0F40, app::Object*, RunOnEmptyStackCore, (app::StackGuard_1 * this_ptr, app::Func_2_Object_Object_* action, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x0472ADA0, StackGuard_1_RunOnEmptyStackCore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01AF1250, void, RunOnEmptyStack_2, (app::StackGuard_1 * this_ptr, app::Action_2_System_Linq_Expressions_Interpreter_LightCompiler_System_Linq_Expressions_Expression_* action, app::LightCompiler* arg1, app::Expression* arg2))
    IL2CPP_REGISTER_METHODINFO(0x04719848, StackGuard_1_RunOnEmptyStack_1__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::StackGuard
