#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/Instruction.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_* this_ptr,
        app::FieldInfo_1* key,
        app::Instruction** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_* this_ptr,
        app::FieldInfo_1* key,
        app::Instruction* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_
