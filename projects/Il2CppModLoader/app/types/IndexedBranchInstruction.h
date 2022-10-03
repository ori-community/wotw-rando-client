#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IndexedBranchInstruction {
        namespace {
            app::IndexedBranchInstruction__Class* type_info_ref = nullptr;
        }
        app::IndexedBranchInstruction__Class** type_info = &type_info_ref;
        inline app::IndexedBranchInstruction__Class* get_class() {
            return il2cpp::get_class<app::IndexedBranchInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "IndexedBranchInstruction");
        }
        inline app::IndexedBranchInstruction* create() {
            return il2cpp::create_object<app::IndexedBranchInstruction>(get_class());
        }
    } // namespace IndexedBranchInstruction
} // namespace app::classes::types
