#pragma once
#include <Modloader/app/structs/LinearPathVariedSpeed.h>
#include <Modloader/app/structs/LinearPathVariedSpeed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinearPathVariedSpeed {
        inline app::LinearPathVariedSpeed__Class** type_info() {
            static app::LinearPathVariedSpeed__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LinearPathVariedSpeed__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LinearPathVariedSpeed__Class* get_class() {
            return il2cpp::get_class<app::LinearPathVariedSpeed__Class>(type_info(), "", "LinearPathVariedSpeed");
        }
        inline app::LinearPathVariedSpeed* create() {
            return il2cpp::create_object<app::LinearPathVariedSpeed>(get_class());
        }
    } // namespace LinearPathVariedSpeed
} // namespace app::classes::types
