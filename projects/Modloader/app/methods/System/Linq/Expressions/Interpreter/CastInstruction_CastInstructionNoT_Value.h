#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CastInstruction_CastInstructionNoT_Value.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::CastInstruction_CastInstructionNoT_Value {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CastInstruction_CastInstructionNoT_Value * this_ptr, app::Type* t))
    IL2CPP_REGISTER_METHOD(0x022D9770, void, ConvertNull, (app::CastInstruction_CastInstructionNoT_Value * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::CastInstruction_CastInstructionNoT_Value
