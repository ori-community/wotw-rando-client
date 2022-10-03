#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JointChains_Chain {
        namespace {
            app::JointChains_Chain__Class* type_info_ref = nullptr;
        }
        app::JointChains_Chain__Class** type_info = &type_info_ref;
        inline app::JointChains_Chain__Class* get_class() {
            return il2cpp::get_nested_class<app::JointChains_Chain__Class>(type_info, "Moon", "JointChains", "Chain");
        }
        inline app::JointChains_Chain* create() {
            return il2cpp::create_object<app::JointChains_Chain>(get_class());
        }
        inline app::JointChains_Chain__Array* create_array(int size) {
            return il2cpp::array_new<app::JointChains_Chain__Array>(get_class(), size);
        }
    } // namespace JointChains_Chain
} // namespace app::classes::types
