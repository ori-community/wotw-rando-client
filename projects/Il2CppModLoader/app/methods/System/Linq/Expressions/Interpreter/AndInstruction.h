#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::AndInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::AndInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::AndInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D3AF0, app::String *, get_InstructionName, (app::AndInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AndInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D3B70, app::Instruction *, Create, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x047051C0, AndInstruction_Create__MethodInfo)
}
