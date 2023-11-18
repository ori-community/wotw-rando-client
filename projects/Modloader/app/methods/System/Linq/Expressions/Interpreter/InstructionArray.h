#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InstructionArray__Boxed.h>
#include <Modloader/app/structs/Instruction__Array.h>
#include <Modloader/app/structs/List_1_KeyValuePair_2_System_Int32_System_Object_.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RuntimeLabel__Array.h>

namespace app::classes::System::Linq::Expressions::Interpreter::InstructionArray {
    IL2CPP_REGISTER_METHOD(0x001C6430, void, ctor, (app::InstructionArray__Boxed * this_ptr, int32_t max_stack_depth, int32_t max_continuation_depth, app::Instruction__Array* instructions, app::Object__Array* objects, app::RuntimeLabel__Array* labels, app::List_1_KeyValuePair_2_System_Int32_System_Object_* debug_cookies))
}
