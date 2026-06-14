#pragma once
#include <Modloader/app/structs/JointChains_Chain.h>
#include <Modloader/app/structs/JointChains_Chain__Array.h>
#include <Modloader/app/structs/JointChains_Chain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JointChains_Chain {
        inline app::JointChains_Chain__Class** type_info() {
            static app::JointChains_Chain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JointChains_Chain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JointChains_Chain__Class* get_class() {
            return il2cpp::get_nested_class<app::JointChains_Chain__Class>(type_info(), "Moon", "JointChains", "Chain");
        }
        inline app::JointChains_Chain* create() {
            return il2cpp::create_object<app::JointChains_Chain>(get_class());
        }
        inline app::JointChains_Chain__Array* create_array(int size) {
            return il2cpp::array_new<app::JointChains_Chain__Array>(get_class(), size);
        }
        inline app::JointChains_Chain__Array* create_array(const std::vector<app::JointChains_Chain*>& items) {
            return il2cpp::array_new<app::JointChains_Chain__Array>(get_class(), items);
        }
    } // namespace JointChains_Chain
} // namespace app::classes::types
