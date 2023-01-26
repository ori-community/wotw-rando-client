#pragma once
#include <Modloader/app/structs/License.h>
#include <Modloader/app/structs/License__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace License {
        inline app::License__Class** type_info() {
            static app::License__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::License__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::License__Class* get_class() {
            return il2cpp::get_class<app::License__Class>(type_info(), "System.ComponentModel", "License");
        }
        inline app::License* create() {
            return il2cpp::create_object<app::License>(get_class());
        }
    } // namespace License
} // namespace app::classes::types
