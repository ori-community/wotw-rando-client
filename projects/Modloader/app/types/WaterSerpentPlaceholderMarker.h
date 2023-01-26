#pragma once
#include <Modloader/app/structs/WaterSerpentPlaceholderMarker.h>
#include <Modloader/app/structs/WaterSerpentPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterSerpentPlaceholderMarker {
        inline app::WaterSerpentPlaceholderMarker__Class** type_info() {
            static app::WaterSerpentPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterSerpentPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterSerpentPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::WaterSerpentPlaceholderMarker__Class>(type_info(), "", "WaterSerpentPlaceholderMarker");
        }
        inline app::WaterSerpentPlaceholderMarker* create() {
            return il2cpp::create_object<app::WaterSerpentPlaceholderMarker>(get_class());
        }
    } // namespace WaterSerpentPlaceholderMarker
} // namespace app::classes::types
