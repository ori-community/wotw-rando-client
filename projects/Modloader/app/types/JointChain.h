#pragma once
#include <Modloader/app/structs/JointChain.h>
#include <Modloader/app/structs/JointChain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JointChain {
        inline app::JointChain__Class** type_info() {
            static app::JointChain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JointChain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JointChain__Class* get_class() {
            return il2cpp::get_class<app::JointChain__Class>(type_info(), "Moon", "JointChain");
        }
        inline app::JointChain* create() {
            return il2cpp::create_object<app::JointChain>(get_class());
        }
    } // namespace JointChain
} // namespace app::classes::types
