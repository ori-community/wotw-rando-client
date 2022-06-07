#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ArgumentCount, (app::MethodInfoCallInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC8D50, void, ctor, (app::MethodInfoCallInstruction * this_ptr, app::MethodInfo_1 * target, int32_t argument_count))
    IL2CPP_REGISTER_METHOD(0x023FBA40, int32_t, get_ProducedStack, (app::MethodInfoCallInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023FBB20, int32_t, Run, (app::MethodInfoCallInstruction * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHODINFO(0x0478FA20, MethodInfoCallInstruction_Run__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023FBE10, app::Object__Array *, GetArgs, (app::MethodInfoCallInstruction * this_ptr, app::InterpretedFrame * frame, int32_t first, int32_t skip))
    IL2CPP_REGISTER_METHOD(0x023FBF80, app::String *, ToString, (app::MethodInfoCallInstruction * this_ptr))
}
