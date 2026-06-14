#pragma once
#include <Modloader/app/structs/ClusterModifierBone2.h>
#include <Modloader/app/structs/ClusterModifierBone2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClusterModifierBone2 {
        inline app::ClusterModifierBone2__Class** type_info() {
            static app::ClusterModifierBone2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClusterModifierBone2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClusterModifierBone2__Class* get_class() {
            return il2cpp::get_class<app::ClusterModifierBone2__Class>(type_info(), "", "ClusterModifierBone2");
        }
        inline app::ClusterModifierBone2* create() {
            return il2cpp::create_object<app::ClusterModifierBone2>(get_class());
        }
    } // namespace ClusterModifierBone2
} // namespace app::classes::types
