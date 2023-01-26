#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LightDelegateCreator.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/IStrongBox__Array.h>
#include <Modloader/app/structs/Interpreter.h>
#include <Modloader/app/structs/LambdaExpression.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LightDelegateCreator {
    IL2CPP_REGISTER_METHOD(0x0231B8E0, void, ctor, (app::LightDelegateCreator * this_ptr, app::Interpreter* interpreter, app::LambdaExpression* lambda))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Interpreter*, get_Interpreter, (app::LightDelegateCreator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023F6F30, app::Delegate*, CreateDelegate_1, (app::LightDelegateCreator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023F6F40, app::Delegate*, CreateDelegate_2, (app::LightDelegateCreator * this_ptr, app::IStrongBox__Array* closure))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LightDelegateCreator
