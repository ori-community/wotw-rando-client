#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BranchLabel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BranchLabel__Class** type_info;
        inline app::BranchLabel__Class* get_class() {
            return il2cpp::get_class<app::BranchLabel__Class>(type_info, "System.Linq.Expressions.Interpreter", "BranchLabel");
        }
        inline app::BranchLabel* create() {
            return il2cpp::create_object<app::BranchLabel>(get_class());
        }
        inline app::BranchLabel__Array* create_array(int size) {
            return il2cpp::array_new<app::BranchLabel__Array>(get_class(), size);
        }
        inline app::BranchLabel__Array* create_array(const std::vector<app::BranchLabel*>& items) {
            return il2cpp::array_new<app::BranchLabel__Array>(get_class(), items);
        }
    } // namespace BranchLabel
} // namespace app::classes::types
