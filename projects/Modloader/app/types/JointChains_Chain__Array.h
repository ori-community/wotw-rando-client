#pragma once
#include <Modloader/app/structs/JointChains_Chain__Array.h>
#include <Modloader/app/structs/JointChains_Chain__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JointChains_Chain__Array {
        inline app::JointChains_Chain__Array__Class** type_info() {
            static app::JointChains_Chain__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JointChains_Chain__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JointChains_Chain__Array__Class* get_class() {
            return il2cpp::get_class<app::JointChains_Chain__Array__Class>(type_info(), "Moon", "JointChains+Chain[]");
        }
        inline app::JointChains_Chain__Array* create() {
            return il2cpp::create_object<app::JointChains_Chain__Array>(get_class());
        }
    } // namespace JointChains_Chain__Array
} // namespace app::classes::types
