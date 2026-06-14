#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/LightCompiler.h>
#include <Modloader/app/structs/LightCompiler_c.h>
#include <Modloader/app/structs/SwitchCase.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LightCompiler___c {
    IL2CPP_REGISTER_METHOD(0x023F5F90, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LightCompiler_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023F60D0, bool, _CompileSwitchExpression_b__56_0, app::LightCompiler_c* this_ptr, app::SwitchCase* c)
    IL2CPP_REGISTER_METHOD(0x023F62C0, bool, _CompileSwitchExpression_b__56_1, app::LightCompiler_c* this_ptr, app::Expression* t)
    IL2CPP_REGISTER_METHOD(0x023F6380, void, _CompileNoLabelPush_b__101_0, app::LightCompiler_c* this_ptr, app::LightCompiler* this_1, app::Expression* e)
} // namespace app::classes::System::Linq::Expressions::Interpreter::LightCompiler___c
