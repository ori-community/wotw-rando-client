#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StackGuard_1.h>
#include <Modloader/app/structs/Action_2_Object_Object_.h>
#include <Modloader/app/structs/Action_2_System_Linq_Expressions_Interpreter_LightCompiler_Syste_Lin_Expression_Expressio_.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/LightCompiler.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Expressions::StackGuard {
    IL2CPP_REGISTER_METHOD(0x02FBFB20, bool, TryEnterOnCurrentStack, (app::StackGuard_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StackGuard_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AF1250, void, RunOnEmptyStack_1, (app::StackGuard_1 * this_ptr, app::Action_2_Object_Object_* action, app::Object* arg1, app::Object* arg2))
    IL2CPP_REGISTER_METHOD(0x018F0F40, app::Object*, RunOnEmptyStackCore, (app::StackGuard_1 * this_ptr, app::Func_2_Object_Object_* action, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01AF1250, void, RunOnEmptyStack_2, (app::StackGuard_1 * this_ptr, app::Action_2_System_Linq_Expressions_Interpreter_LightCompiler_System_Linq_Expressions_Expression_* action, app::LightCompiler* arg1, app::Expression* arg2))
} // namespace app::classes::System::Linq::Expressions::StackGuard
