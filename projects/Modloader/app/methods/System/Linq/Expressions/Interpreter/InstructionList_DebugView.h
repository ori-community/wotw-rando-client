#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InstructionList_DebugView.h>
#include <Modloader/app/structs/InstructionList.h>
#include <Modloader/app/structs/InstructionList_DebugView_InstructionView__Array.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_Interpreter_Instruction_.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Object_.h>
#include <Modloader/app/structs/Func_2_Int32_Int32_.h>
#include <Modloader/app/structs/IReadOnlyList_1_KeyValuePair_2_System_Int32_System_Object_.h>

namespace app::classes::System::Linq::Expressions::Interpreter::InstructionList_DebugView {
    IL2CPP_REGISTER_METHOD(0x01CE09D0, void, ctor, (app::InstructionList_DebugView * this_ptr, app::InstructionList* list))
    IL2CPP_REGISTER_METHOD(0x01CE0A70, app::InstructionList_DebugView_InstructionView__Array*, get_A0, (app::InstructionList_DebugView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE0A80, app::InstructionList_DebugView_InstructionView__Array*, GetInstructionViews_1, (app::InstructionList_DebugView * this_ptr, bool include_debug_cookies))
    IL2CPP_REGISTER_METHOD(0x01CE0C40, app::InstructionList_DebugView_InstructionView__Array*, GetInstructionViews_2, (app::IReadOnlyList_1_System_Linq_Expressions_Interpreter_Instruction_ * instructions, app::IReadOnlyList_1_System_Object_* objects, app::Func_2_Int32_Int32_* label_indexer, app::IReadOnlyList_1_KeyValuePair_2_System_Int32_System_Object_* debug_cookies))
    IL2CPP_REGISTER_METHOD(0x01CE11A0, int32_t, _GetInstructionViews_b__4_0, (app::InstructionList_DebugView * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473C648, InstructionList_DebugView__GetInstructionViews_b__4_0__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::Interpreter::InstructionList_DebugView
