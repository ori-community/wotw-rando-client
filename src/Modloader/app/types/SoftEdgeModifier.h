#pragma once
#include <Modloader/app/structs/SoftEdgeModifier.h>
#include <Modloader/app/structs/SoftEdgeModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoftEdgeModifier {
        inline app::SoftEdgeModifier__Class** type_info() {
            static app::SoftEdgeModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoftEdgeModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoftEdgeModifier__Class* get_class() {
            return il2cpp::get_class<app::SoftEdgeModifier__Class>(type_info(), "", "SoftEdgeModifier");
        }
        inline app::SoftEdgeModifier* create() {
            return il2cpp::create_object<app::SoftEdgeModifier>(get_class());
        }
    } // namespace SoftEdgeModifier
} // namespace app::classes::types
