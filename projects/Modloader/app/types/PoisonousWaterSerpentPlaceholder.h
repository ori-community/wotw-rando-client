#pragma once
#include <Modloader/app/structs/PoisonousWaterSerpentPlaceholder.h>
#include <Modloader/app/structs/PoisonousWaterSerpentPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoisonousWaterSerpentPlaceholder {
        inline app::PoisonousWaterSerpentPlaceholder__Class** type_info() {
            static app::PoisonousWaterSerpentPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoisonousWaterSerpentPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoisonousWaterSerpentPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterSerpentPlaceholder__Class>(type_info(), "", "PoisonousWaterSerpentPlaceholder");
        }
        inline app::PoisonousWaterSerpentPlaceholder* create() {
            return il2cpp::create_object<app::PoisonousWaterSerpentPlaceholder>(get_class());
        }
    } // namespace PoisonousWaterSerpentPlaceholder
} // namespace app::classes::types
