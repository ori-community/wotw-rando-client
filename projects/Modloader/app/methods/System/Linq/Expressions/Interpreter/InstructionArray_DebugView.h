#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InstructionArray.h>
#include <Modloader/app/structs/InstructionArray_DebugView.h>
#include <Modloader/app/structs/InstructionList_DebugView_InstructionView__Array.h>

namespace app::classes::System::Linq::Expressions::Interpreter::InstructionArray_DebugView {
    IL2CPP_REGISTER_METHOD(0x01CD7AE0, void, ctor, app::InstructionArray_DebugView* this_ptr, app::InstructionArray array)
    IL2CPP_REGISTER_METHOD(0x01CD7BC0, app::InstructionList_DebugView_InstructionView__Array*, get_A0, app::InstructionArray_DebugView* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01CD7BD0,
        app::InstructionList_DebugView_InstructionView__Array*,
        GetInstructionViews,
        app::InstructionArray_DebugView* this_ptr,
        bool include_debug_cookies
    )
    IL2CPP_REGISTER_METHOD(0x01CD7D90, int32_t, _GetInstructionViews_b__4_0, app::InstructionArray_DebugView* this_ptr, int32_t index)
} // namespace app::classes::System::Linq::Expressions::Interpreter::InstructionArray_DebugView
