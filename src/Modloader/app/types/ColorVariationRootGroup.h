#pragma once
#include <Modloader/app/structs/ColorVariationRootGroup.h>
#include <Modloader/app/structs/ColorVariationRootGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorVariationRootGroup {
        inline app::ColorVariationRootGroup__Class** type_info() {
            static app::ColorVariationRootGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorVariationRootGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorVariationRootGroup__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationRootGroup__Class>(type_info(), "", "ColorVariationRootGroup");
        }
        inline app::ColorVariationRootGroup* create() {
            return il2cpp::create_object<app::ColorVariationRootGroup>(get_class());
        }
    } // namespace ColorVariationRootGroup
} // namespace app::classes::types
