#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_.h>
#include <Modloader/app/structs/Comparison_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_.h>
#include <Modloader/app/structs/InterpretedFrameInfo.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* this_ptr,
        app::Comparison_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* this_ptr,
        app::InterpretedFrameInfo x,
        app::InterpretedFrameInfo y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_
