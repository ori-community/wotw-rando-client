#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_Int32_Int32_.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Object_.h>
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::Instruction {
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ConsumedStack, app::Instruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ProducedStack, app::Instruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ConsumedContinuations, app::Instruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ProducedContinuations, app::Instruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CD79A0, int32_t, get_StackBalance, app::Instruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CD79F0, int32_t, get_ContinuationsBalance, app::Instruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CD7A40, app::String*, ToString, app::Instruction* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01742A00,
        app::String*,
        ToDebugString,
        app::Instruction* this_ptr,
        int32_t instruction_index,
        app::Object* cookie,
        app::Func_2_Int32_Int32_* label_indexer,
        app::IReadOnlyList_1_System_Object_* objects
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, NullCheck, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Instruction* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::Instruction
