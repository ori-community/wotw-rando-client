#pragma once
#include <Modloader/app/structs/SpringPlaceholder.h>
#include <Modloader/app/structs/SpringPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpringPlaceholder {
        inline app::SpringPlaceholder__Class** type_info() {
            static app::SpringPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpringPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpringPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpringPlaceholder__Class>(type_info(), "", "SpringPlaceholder");
        }
        inline app::SpringPlaceholder* create() {
            return il2cpp::create_object<app::SpringPlaceholder>(get_class());
        }
    } // namespace SpringPlaceholder
} // namespace app::classes::types
