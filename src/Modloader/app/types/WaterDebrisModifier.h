#pragma once
#include <Modloader/app/structs/WaterDebrisModifier.h>
#include <Modloader/app/structs/WaterDebrisModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterDebrisModifier {
        inline app::WaterDebrisModifier__Class** type_info() {
            static app::WaterDebrisModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterDebrisModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterDebrisModifier__Class* get_class() {
            return il2cpp::get_class<app::WaterDebrisModifier__Class>(type_info(), "", "WaterDebrisModifier");
        }
        inline app::WaterDebrisModifier* create() {
            return il2cpp::create_object<app::WaterDebrisModifier>(get_class());
        }
    } // namespace WaterDebrisModifier
} // namespace app::classes::types
