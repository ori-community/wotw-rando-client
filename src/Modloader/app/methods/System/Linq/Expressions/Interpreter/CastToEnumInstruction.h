#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CastToEnumInstruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::CastToEnumInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::CastToEnumInstruction* this_ptr, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x022D9D40, int32_t, Run, app::CastToEnumInstruction* this_ptr, app::InterpretedFrame* frame)
} // namespace app::classes::System::Linq::Expressions::Interpreter::CastToEnumInstruction
