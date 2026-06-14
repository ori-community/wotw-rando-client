#pragma once
#include <Modloader/app/structs/IndexedBranchInstruction.h>
#include <Modloader/app/structs/IndexedBranchInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IndexedBranchInstruction {
        inline app::IndexedBranchInstruction__Class** type_info() {
            static app::IndexedBranchInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IndexedBranchInstruction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IndexedBranchInstruction__Class* get_class() {
            return il2cpp::get_class<app::IndexedBranchInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "IndexedBranchInstruction");
        }
        inline app::IndexedBranchInstruction* create() {
            return il2cpp::create_object<app::IndexedBranchInstruction>(get_class());
        }
    } // namespace IndexedBranchInstruction
} // namespace app::classes::types
