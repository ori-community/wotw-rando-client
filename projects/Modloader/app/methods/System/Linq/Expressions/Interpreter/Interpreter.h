#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Interpreter.h>
#include <Modloader/app/structs/DebugInfo__Array.h>
#include <Modloader/app/structs/Dictionary_2_Syste_Li_Expressio_ParameterExpressi_Syst_Li_Expressio_Interpret_LocalVariab_.h>
#include <Modloader/app/structs/InstructionArray.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/LocalVariables.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::Interpreter {
    IL2CPP_REGISTER_METHOD(0x01CE2F00, void, ctor, (app::Interpreter * this_ptr, app::String* name, app::LocalVariables* locals, app::InstructionArray instructions, app::DebugInfo__Array* debug_infos))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_Name, (app::Interpreter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_LocalCount, (app::Interpreter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE2F60, int32_t, get_ClosureSize, (app::Interpreter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE2FF0, app::InstructionArray, get_Instructions, (app::Interpreter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_*, get_ClosureVariables, (app::Interpreter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE3010, void, Run, (app::Interpreter * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x01CE30B0, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::Interpreter
