#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::OffsetInstruction {
    IL2CPP_REGISTER_METHOD(0x0240B100, app::Instruction *, Fixup, (app::OffsetInstruction * this_ptr, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x0240B1B0, app::String *, ToDebugString, (app::OffsetInstruction * this_ptr, int32_t instruction_index, app::Object * cookie, app::Func_2_Int32_Int32_ * label_indexer, app::IReadOnlyList_1_System_Object_ * objects))
    IL2CPP_REGISTER_METHOD(0x0240B2A0, app::String *, ToString, (app::OffsetInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01834240, void, ctor, (app::OffsetInstruction * this_ptr))
}
