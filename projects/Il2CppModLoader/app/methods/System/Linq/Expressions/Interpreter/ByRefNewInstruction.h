#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::ByRefNewInstruction {
    IL2CPP_REGISTER_METHOD(0x0199E410, void, ctor, (app::ByRefNewInstruction * this_ptr, app::ConstructorInfo * target, int32_t argument_count, app::ByRefUpdater__Array * byref_args))
    IL2CPP_REGISTER_METHOD(0x022D72A0, app::String *, get_InstructionName, (app::ByRefNewInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D7320, int32_t, Run, (app::ByRefNewInstruction * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHODINFO(0x0470A9C0, ByRefNewInstruction_Run__MethodInfo)
}
