#pragma once
#include <Modloader/app/structs/WaterInteraction.h>
#include <Modloader/app/structs/WaterInteraction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterInteraction {
        inline app::WaterInteraction__Class** type_info() {
            static app::WaterInteraction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterInteraction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterInteraction__Class* get_class() {
            return il2cpp::get_class<app::WaterInteraction__Class>(type_info(), "", "WaterInteraction");
        }
        inline app::WaterInteraction* create() {
            return il2cpp::create_object<app::WaterInteraction>(get_class());
        }
    } // namespace WaterInteraction
} // namespace app::classes::types
