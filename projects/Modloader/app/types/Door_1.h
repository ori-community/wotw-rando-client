#pragma once
#include <Modloader/app/structs/Door_1.h>
#include <Modloader/app/structs/Door_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Door_1 {
        inline app::Door_1__Class** type_info() {
            static app::Door_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Door_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Door_1__Class* get_class() {
            return il2cpp::get_class<app::Door_1__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "Door");
        }
        inline app::Door_1* create() {
            return il2cpp::create_object<app::Door_1>(get_class());
        }
    } // namespace Door_1
} // namespace app::classes::types
