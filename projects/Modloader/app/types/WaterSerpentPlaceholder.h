#pragma once
#include <Modloader/app/structs/WaterSerpentPlaceholder.h>
#include <Modloader/app/structs/WaterSerpentPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterSerpentPlaceholder {
        inline app::WaterSerpentPlaceholder__Class** type_info() {
            static app::WaterSerpentPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterSerpentPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterSerpentPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::WaterSerpentPlaceholder__Class>(type_info(), "", "WaterSerpentPlaceholder");
        }
        inline app::WaterSerpentPlaceholder* create() {
            return il2cpp::create_object<app::WaterSerpentPlaceholder>(get_class());
        }
    } // namespace WaterSerpentPlaceholder
} // namespace app::classes::types
