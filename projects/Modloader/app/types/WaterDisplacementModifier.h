#pragma once
#include <Modloader/app/structs/WaterDisplacementModifier.h>
#include <Modloader/app/structs/WaterDisplacementModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterDisplacementModifier {
        inline app::WaterDisplacementModifier__Class** type_info() {
            static app::WaterDisplacementModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterDisplacementModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterDisplacementModifier__Class* get_class() {
            return il2cpp::get_class<app::WaterDisplacementModifier__Class>(type_info(), "", "WaterDisplacementModifier");
        }
        inline app::WaterDisplacementModifier* create() {
            return il2cpp::create_object<app::WaterDisplacementModifier>(get_class());
        }
    } // namespace WaterDisplacementModifier
} // namespace app::classes::types
