#pragma once
#include <Modloader/app/structs/LocationChanger.h>
#include <Modloader/app/structs/LocationChanger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocationChanger {
        inline app::LocationChanger__Class** type_info() {
            static app::LocationChanger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocationChanger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocationChanger__Class* get_class() {
            return il2cpp::get_class<app::LocationChanger__Class>(type_info(), "", "LocationChanger");
        }
        inline app::LocationChanger* create() {
            return il2cpp::create_object<app::LocationChanger>(get_class());
        }
    } // namespace LocationChanger
} // namespace app::classes::types
