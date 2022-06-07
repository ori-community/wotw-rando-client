#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::CastInstruction_CastInstructionNoT {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CastInstruction_CastInstructionNoT * this_ptr, app::Type * t))
    IL2CPP_REGISTER_METHOD(0x022D9380, app::CastInstruction *, Create, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x022D9560, int32_t, Run, (app::CastInstruction_CastInstructionNoT * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHODINFO(0x0477BF10, CastInstruction_CastInstructionNoT_Run__MethodInfo)
}
