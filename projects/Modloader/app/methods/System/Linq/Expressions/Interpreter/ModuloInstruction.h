#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ModuloInstruction.h>
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ModuloInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::ModuloInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::ModuloInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023FC010, app::String*, get_InstructionName, (app::ModuloInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ModuloInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023FC090, app::Instruction*, Create, (app::Type * type))
} // namespace app::classes::System::Linq::Expressions::Interpreter::ModuloInstruction
