#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NumericConvertInstruction_Checked.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NumericConvertInstruction_Checked {
    IL2CPP_REGISTER_METHOD(0x02408D70, app::String*, get_InstructionName, app::NumericConvertInstruction_Checked* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02408810,
        void,
        ctor,
        app::NumericConvertInstruction_Checked* this_ptr,
        app::TypeCode__Enum from,
        app::TypeCode__Enum to,
        bool is_lifted_to_null
    )
    IL2CPP_REGISTER_METHOD(0x02408DF0, app::Object*, Convert, app::NumericConvertInstruction_Checked* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02409200, app::Object*, ConvertInt32, app::NumericConvertInstruction_Checked* this_ptr, int32_t obj)
    IL2CPP_REGISTER_METHOD(0x024094F0, app::Object*, ConvertInt64, app::NumericConvertInstruction_Checked* this_ptr, int64_t obj)
    IL2CPP_REGISTER_METHOD(0x02409820, app::Object*, ConvertUInt64, app::NumericConvertInstruction_Checked* this_ptr, uint64_t obj)
    IL2CPP_REGISTER_METHOD(0x02409B80, app::Object*, ConvertDouble, app::NumericConvertInstruction_Checked* this_ptr, double obj)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NumericConvertInstruction_Checked
