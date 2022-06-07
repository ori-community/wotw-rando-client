#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::LoadCachedObjectInstruction * this_ptr, uint32_t index))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::LoadCachedObjectInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023F9550, app::String *, get_InstructionName, (app::LoadCachedObjectInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023F95D0, int32_t, Run, (app::LoadCachedObjectInstruction * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHOD(0x023F96B0, app::String *, ToDebugString, (app::LoadCachedObjectInstruction * this_ptr, int32_t instruction_index, app::Object * cookie, app::Func_2_Int32_Int32_ * label_indexer, app::IReadOnlyList_1_System_Object_ * objects))
    IL2CPP_REGISTER_METHOD(0x023F9800, app::String *, ToString, (app::LoadCachedObjectInstruction * this_ptr))
}
