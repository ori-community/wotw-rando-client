#pragma once
#include <Modloader/app/structs/WaterFallMaskModifier.h>
#include <Modloader/app/structs/WaterFallMaskModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterFallMaskModifier {
        inline app::WaterFallMaskModifier__Class** type_info() {
            static app::WaterFallMaskModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterFallMaskModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterFallMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::WaterFallMaskModifier__Class>(type_info(), "", "WaterFallMaskModifier");
        }
        inline app::WaterFallMaskModifier* create() {
            return il2cpp::create_object<app::WaterFallMaskModifier>(get_class());
        }
    } // namespace WaterFallMaskModifier
} // namespace app::classes::types
