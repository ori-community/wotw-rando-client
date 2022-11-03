#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LocalAccessInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::LocalAccessInstruction * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x023FA3A0, app::String*, ToDebugString, (app::LocalAccessInstruction * this_ptr, int32_t instruction_index, app::Object* cookie, app::Func_2_Int32_Int32_* label_indexer, app::IReadOnlyList_1_System_Object_* objects))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LocalAccessInstruction
