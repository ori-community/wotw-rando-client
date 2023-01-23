#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OrInstruction.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::OrInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::OrInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::OrInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0240B380, app::String*, get_InstructionName, (app::OrInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OrInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0240B400, app::Instruction*, Create, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x0473C538, OrInstruction_Create__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::Interpreter::OrInstruction
