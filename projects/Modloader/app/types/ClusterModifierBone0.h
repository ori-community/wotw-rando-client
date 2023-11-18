#pragma once
#include <Modloader/app/structs/ClusterModifierBone0.h>
#include <Modloader/app/structs/ClusterModifierBone0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClusterModifierBone0 {
        inline app::ClusterModifierBone0__Class** type_info() {
            static app::ClusterModifierBone0__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClusterModifierBone0__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClusterModifierBone0__Class* get_class() {
            return il2cpp::get_class<app::ClusterModifierBone0__Class>(type_info(), "", "ClusterModifierBone0");
        }
        inline app::ClusterModifierBone0* create() {
            return il2cpp::create_object<app::ClusterModifierBone0>(get_class());
        }
    } // namespace ClusterModifierBone0
} // namespace app::classes::types
