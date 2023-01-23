#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NotInstruction.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::NotInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NotInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02405F90, app::String*, get_InstructionName, (app::NotInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02406010, app::Instruction*, Create, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x0476E998, NotInstruction_Create__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotInstruction
