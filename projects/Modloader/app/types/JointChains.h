#pragma once
#include <Modloader/app/structs/JointChains.h>
#include <Modloader/app/structs/JointChains__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JointChains {
        inline app::JointChains__Class** type_info() {
            static app::JointChains__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JointChains__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JointChains__Class* get_class() {
            return il2cpp::get_class<app::JointChains__Class>(type_info(), "Moon", "JointChains");
        }
        inline app::JointChains* create() {
            return il2cpp::create_object<app::JointChains>(get_class());
        }
    } // namespace JointChains
} // namespace app::classes::types
