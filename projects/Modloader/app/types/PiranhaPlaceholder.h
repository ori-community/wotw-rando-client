#pragma once
#include <Modloader/app/structs/PiranhaPlaceholder.h>
#include <Modloader/app/structs/PiranhaPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaPlaceholder {
        inline app::PiranhaPlaceholder__Class** type_info() {
            static app::PiranhaPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::PiranhaPlaceholder__Class>(type_info(), "", "PiranhaPlaceholder");
        }
        inline app::PiranhaPlaceholder* create() {
            return il2cpp::create_object<app::PiranhaPlaceholder>(get_class());
        }
    } // namespace PiranhaPlaceholder
} // namespace app::classes::types
