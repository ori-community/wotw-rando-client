#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IndexedBranchInstruction {
        namespace {
            inline app::IndexedBranchInstruction__Class* type_info_ref = nullptr;
        }
        inline app::IndexedBranchInstruction__Class** type_info = &type_info_ref;
        inline app::IndexedBranchInstruction__Class* get_class() {
            return il2cpp::get_class<app::IndexedBranchInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "IndexedBranchInstruction");
        }
        inline app::IndexedBranchInstruction* create() {
            return il2cpp::create_object<app::IndexedBranchInstruction>(get_class());
        }
    } // namespace IndexedBranchInstruction
} // namespace app::classes::types
