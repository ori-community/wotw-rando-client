#pragma once
#include <Modloader/app/structs/ClusterModifierBone1.h>
#include <Modloader/app/structs/ClusterModifierBone1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClusterModifierBone1 {
        inline app::ClusterModifierBone1__Class** type_info() {
            static app::ClusterModifierBone1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClusterModifierBone1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClusterModifierBone1__Class* get_class() {
            return il2cpp::get_class<app::ClusterModifierBone1__Class>(type_info(), "", "ClusterModifierBone1");
        }
        inline app::ClusterModifierBone1* create() {
            return il2cpp::create_object<app::ClusterModifierBone1>(get_class());
        }
    } // namespace ClusterModifierBone1
} // namespace app::classes::types
