#pragma once
#include <Modloader/app/structs/Door.h>
#include <Modloader/app/structs/Door__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Door {
        inline app::Door__Class** type_info() {
            static app::Door__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Door__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Door__Class* get_class() {
            return il2cpp::get_class<app::Door__Class>(type_info(), "", "Door");
        }
        inline app::Door* create() {
            return il2cpp::create_object<app::Door>(get_class());
        }
    } // namespace Door
} // namespace app::classes::types
