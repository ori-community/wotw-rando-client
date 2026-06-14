#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ByRefMethodInfoCallInstruction.h>
#include <Modloader/app/structs/ByRefUpdater__Array.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/MethodInfo_1.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction {
    IL2CPP_REGISTER_METHOD(
        0x0199E410,
        void,
        ctor,
        app::ByRefMethodInfoCallInstruction* this_ptr,
        app::MethodInfo_1* target,
        int32_t argument_count,
        app::ByRefUpdater__Array* byref_args
    )
    IL2CPP_REGISTER_METHOD(0x022D6D40, int32_t, get_ProducedStack, app::ByRefMethodInfoCallInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022D6E20, int32_t, Run, app::ByRefMethodInfoCallInstruction* this_ptr, app::InterpretedFrame* frame)
} // namespace app::classes::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction
