#pragma once
#include <Modloader/app/structs/ClusterModifier.h>
#include <Modloader/app/structs/ClusterModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClusterModifier {
        inline app::ClusterModifier__Class** type_info() {
            static app::ClusterModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClusterModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClusterModifier__Class* get_class() {
            return il2cpp::get_class<app::ClusterModifier__Class>(type_info(), "", "ClusterModifier");
        }
        inline app::ClusterModifier* create() {
            return il2cpp::create_object<app::ClusterModifier>(get_class());
        }
    } // namespace ClusterModifier
} // namespace app::classes::types
