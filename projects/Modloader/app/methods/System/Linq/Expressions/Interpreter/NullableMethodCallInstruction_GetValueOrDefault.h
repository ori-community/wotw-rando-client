#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NullableMethodCallInstruction_GetValueOrDefault.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/MethodInfo_1.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction_GetValueOrDefault {
    IL2CPP_REGISTER_METHOD(0x02408530, void, ctor, (app::NullableMethodCallInstruction_GetValueOrDefault * this_ptr, app::MethodInfo_1* mi))
    IL2CPP_REGISTER_METHOD(0x02408570, int32_t, Run, (app::NullableMethodCallInstruction_GetValueOrDefault * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction_GetValueOrDefault
