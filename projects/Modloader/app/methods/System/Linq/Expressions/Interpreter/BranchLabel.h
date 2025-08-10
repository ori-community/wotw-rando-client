#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BranchLabel.h>
#include <Modloader/app/structs/InstructionList.h>
#include <Modloader/app/structs/RuntimeLabel.h>

namespace app::classes::System::Linq::Expressions::Interpreter::BranchLabel {
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_LabelIndex, app::BranchLabel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB980, void, set_LabelIndex, app::BranchLabel* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x022D65A0, bool, get_HasRuntimeLabel, app::BranchLabel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_TargetIndex, app::BranchLabel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022D65B0, app::RuntimeLabel, ToRuntimeLabel, app::BranchLabel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022D65D0, void, Mark, app::BranchLabel* this_ptr, app::InstructionList* instructions)
    IL2CPP_REGISTER_METHOD(0x022D67D0, void, AddBranch, app::BranchLabel* this_ptr, app::InstructionList* instructions, int32_t branch_index)
    IL2CPP_REGISTER_METHOD(0x022D6AA0, void, FixupBranch, app::BranchLabel* this_ptr, app::InstructionList* instructions, int32_t branch_index)
    IL2CPP_REGISTER_METHOD(0x022D6AD0, void, ctor, app::BranchLabel* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::BranchLabel
