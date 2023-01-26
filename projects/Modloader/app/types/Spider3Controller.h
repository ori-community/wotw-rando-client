#pragma once
#include <Modloader/app/structs/Spider3Controller.h>
#include <Modloader/app/structs/Spider3Controller__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Spider3Controller {
        inline app::Spider3Controller__Class** type_info() {
            static app::Spider3Controller__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Spider3Controller__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Spider3Controller__Class* get_class() {
            return il2cpp::get_class<app::Spider3Controller__Class>(type_info(), "", "Spider3Controller");
        }
        inline app::Spider3Controller* create() {
            return il2cpp::create_object<app::Spider3Controller>(get_class());
        }
    } // namespace Spider3Controller
} // namespace app::classes::types
