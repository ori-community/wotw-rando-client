#pragma once
#include <Modloader/app/structs/Spring.h>
#include <Modloader/app/structs/Spring__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Spring {
        inline app::Spring__Class** type_info() {
            static app::Spring__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Spring__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Spring__Class* get_class() {
            return il2cpp::get_class<app::Spring__Class>(type_info(), "", "Spring");
        }
        inline app::Spring* create() {
            return il2cpp::create_object<app::Spring>(get_class());
        }
    } // namespace Spring
} // namespace app::classes::types
