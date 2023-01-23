#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CastInstruction_CastInstructionNoT_Ref.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::CastInstruction_CastInstructionNoT_Ref {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CastInstruction_CastInstructionNoT_Ref * this_ptr, app::Type* t))
    IL2CPP_REGISTER_METHOD(0x022D9720, void, ConvertNull, (app::CastInstruction_CastInstructionNoT_Ref * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::CastInstruction_CastInstructionNoT_Ref
