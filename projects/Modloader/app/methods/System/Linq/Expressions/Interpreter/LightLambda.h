#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LightLambda.h>
#include <Modloader/app/structs/LightDelegateCreator.h>
#include <Modloader/app/structs/IStrongBox__Array.h>
#include <Modloader/app/structs/Func_2_System_Linq_Expressions_Interpreter_LightLambda_Delegate_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LightLambda {
    IL2CPP_REGISTER_METHOD(0x023F7180, void, RunVoid0, (app::LightLambda * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023F7270, void, ctor, (app::LightLambda * this_ptr, app::LightDelegateCreator* delegate_creator, app::IStrongBox__Array* closure))
    IL2CPP_REGISTER_METHOD(0x023F72A0, app::Func_2_System_Linq_Expressions_Interpreter_LightLambda_Delegate_*, GetRunDelegateCtor, (app::Type * delegate_type))
    IL2CPP_REGISTER_METHOD(0x023F74C0, app::Func_2_System_Linq_Expressions_Interpreter_LightLambda_Delegate_*, MakeRunDelegateCtor, (app::Type * delegate_type))
    IL2CPP_REGISTER_METHOD(0x023F7FB0, app::Delegate*, CreateCustomDelegate, (app::LightLambda * this_ptr, app::Type* delegate_type))
    IL2CPP_REGISTER_METHODINFO(0x0473F7A8, LightLambda_CreateCustomDelegate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023F8B60, app::Delegate*, MakeDelegate, (app::LightLambda * this_ptr, app::Type* delegate_type))
    IL2CPP_REGISTER_METHOD(0x023F8C30, app::InterpretedFrame*, MakeFrame, (app::LightLambda * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023F8E70, app::Object*, Run, (app::LightLambda * this_ptr, app::Object__Array* arguments))
    IL2CPP_REGISTER_METHODINFO(0x047976A0, LightLambda_Run__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023F9130, app::Object*, RunVoid, (app::LightLambda * this_ptr, app::Object__Array* arguments))
    IL2CPP_REGISTER_METHOD(0x023F93B0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01AF0EC0, void, RunVoidRef2, (app::LightLambda * this_ptr, app::Object** arg0, app::Object** arg1))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LightLambda
