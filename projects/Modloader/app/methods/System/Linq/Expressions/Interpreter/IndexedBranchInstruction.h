#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IndexedBranchInstruction.h>
#include <Modloader/app/structs/Func_2_Int32_Int32_.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Object_.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeLabel.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::IndexedBranchInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::IndexedBranchInstruction * this_ptr, int32_t label_index))
    IL2CPP_REGISTER_METHOD(0x01CD6220, app::RuntimeLabel, GetLabel, (app::IndexedBranchInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x01CD6290, app::String*, ToDebugString, (app::IndexedBranchInstruction * this_ptr, int32_t instruction_index, app::Object* cookie, app::Func_2_Int32_Int32_* label_indexer, app::IReadOnlyList_1_System_Object_* objects))
    IL2CPP_REGISTER_METHOD(0x01CD6390, app::String*, ToString, (app::IndexedBranchInstruction * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::IndexedBranchInstruction
