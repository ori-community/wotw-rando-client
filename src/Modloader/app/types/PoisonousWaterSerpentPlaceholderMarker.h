#pragma once
#include <Modloader/app/structs/PoisonousWaterSerpentPlaceholderMarker.h>
#include <Modloader/app/structs/PoisonousWaterSerpentPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoisonousWaterSerpentPlaceholderMarker {
        inline app::PoisonousWaterSerpentPlaceholderMarker__Class** type_info() {
            static app::PoisonousWaterSerpentPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoisonousWaterSerpentPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoisonousWaterSerpentPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterSerpentPlaceholderMarker__Class>(type_info(), "", "PoisonousWaterSerpentPlaceholderMarker");
        }
        inline app::PoisonousWaterSerpentPlaceholderMarker* create() {
            return il2cpp::create_object<app::PoisonousWaterSerpentPlaceholderMarker>(get_class());
        }
    } // namespace PoisonousWaterSerpentPlaceholderMarker
} // namespace app::classes::types
