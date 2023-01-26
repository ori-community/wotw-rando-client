#pragma once
#include <Modloader/app/structs/Frost.h>
#include <Modloader/app/structs/Frost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Frost {
        inline app::Frost__Class** type_info() {
            static app::Frost__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Frost__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Frost__Class* get_class() {
            return il2cpp::get_class<app::Frost__Class>(type_info(), "Colorful", "Frost");
        }
        inline app::Frost* create() {
            return il2cpp::create_object<app::Frost>(get_class());
        }
    } // namespace Frost
} // namespace app::classes::types
