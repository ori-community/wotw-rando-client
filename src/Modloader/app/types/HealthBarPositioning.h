#pragma once
#include <Modloader/app/structs/HealthBarPositioning.h>
#include <Modloader/app/structs/HealthBarPositioning__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HealthBarPositioning {
        inline app::HealthBarPositioning__Class** type_info() {
            static app::HealthBarPositioning__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HealthBarPositioning__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HealthBarPositioning__Class* get_class() {
            return il2cpp::get_class<app::HealthBarPositioning__Class>(type_info(), "", "HealthBarPositioning");
        }
        inline app::HealthBarPositioning* create() {
            return il2cpp::create_object<app::HealthBarPositioning>(get_class());
        }
    } // namespace HealthBarPositioning
} // namespace app::classes::types
