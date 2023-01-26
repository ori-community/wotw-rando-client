#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CastInstruction_CastInstructionNoT.h>
#include <Modloader/app/structs/CastInstruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::CastInstruction_CastInstructionNoT {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CastInstruction_CastInstructionNoT * this_ptr, app::Type* t))
    IL2CPP_REGISTER_METHOD(0x022D9380, app::CastInstruction*, Create, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x022D9560, int32_t, Run, (app::CastInstruction_CastInstructionNoT * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::CastInstruction_CastInstructionNoT
