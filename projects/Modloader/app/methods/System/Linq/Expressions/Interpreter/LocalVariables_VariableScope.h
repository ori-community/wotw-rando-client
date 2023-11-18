#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocalVariables_VariableScope.h>
#include <Modloader/app/structs/LocalVariable.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LocalVariables_VariableScope {
    IL2CPP_REGISTER_METHOD(0x023FBA20, void, ctor, (app::LocalVariables_VariableScope * this_ptr, app::LocalVariable* variable, int32_t start, app::LocalVariables_VariableScope* parent))
}
