#pragma once
#include <Modloader/app/structs/WandererPlaceholder.h>
#include <Modloader/app/structs/WandererPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererPlaceholder {
        inline app::WandererPlaceholder__Class** type_info() {
            static app::WandererPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::WandererPlaceholder__Class>(type_info(), "", "WandererPlaceholder");
        }
        inline app::WandererPlaceholder* create() {
            return il2cpp::create_object<app::WandererPlaceholder>(get_class());
        }
    } // namespace WandererPlaceholder
} // namespace app::classes::types
