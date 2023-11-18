#pragma once
#include <Modloader/app/structs/UberWaterSplash.h>
#include <Modloader/app/structs/UberWaterSplash__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterSplash {
        inline app::UberWaterSplash__Class** type_info() {
            static app::UberWaterSplash__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterSplash__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterSplash__Class* get_class() {
            return il2cpp::get_class<app::UberWaterSplash__Class>(type_info(), "", "UberWaterSplash");
        }
        inline app::UberWaterSplash* create() {
            return il2cpp::create_object<app::UberWaterSplash>(get_class());
        }
    } // namespace UberWaterSplash
} // namespace app::classes::types
