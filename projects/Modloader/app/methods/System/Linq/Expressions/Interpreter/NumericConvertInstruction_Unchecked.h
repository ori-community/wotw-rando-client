#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NumericConvertInstruction_Unchecked.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NumericConvertInstruction_Unchecked {
    IL2CPP_REGISTER_METHOD(0x0240A310, app::String*, get_InstructionName, app::NumericConvertInstruction_Unchecked* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02408810,
        void,
        ctor,
        app::NumericConvertInstruction_Unchecked* this_ptr,
        app::TypeCode__Enum from,
        app::TypeCode__Enum to,
        bool is_lifted_to_null
    )
    IL2CPP_REGISTER_METHOD(0x0240A390, app::Object*, Convert, app::NumericConvertInstruction_Unchecked* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0240A7A0, app::Object*, ConvertInt32, app::NumericConvertInstruction_Unchecked* this_ptr, int32_t obj)
    IL2CPP_REGISTER_METHOD(0x0240A9F0, app::Object*, ConvertInt64, app::NumericConvertInstruction_Unchecked* this_ptr, int64_t obj)
    IL2CPP_REGISTER_METHOD(0x0240AC30, app::Object*, ConvertUInt64, app::NumericConvertInstruction_Unchecked* this_ptr, uint64_t obj)
    IL2CPP_REGISTER_METHOD(0x0240AE70, app::Object*, ConvertDouble, app::NumericConvertInstruction_Unchecked* this_ptr, double obj)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NumericConvertInstruction_Unchecked
