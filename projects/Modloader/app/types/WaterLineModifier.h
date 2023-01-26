#pragma once
#include <Modloader/app/structs/WaterLineModifier.h>
#include <Modloader/app/structs/WaterLineModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterLineModifier {
        inline app::WaterLineModifier__Class** type_info() {
            static app::WaterLineModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterLineModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterLineModifier__Class* get_class() {
            return il2cpp::get_class<app::WaterLineModifier__Class>(type_info(), "", "WaterLineModifier");
        }
        inline app::WaterLineModifier* create() {
            return il2cpp::create_object<app::WaterLineModifier>(get_class());
        }
    } // namespace WaterLineModifier
} // namespace app::classes::types
