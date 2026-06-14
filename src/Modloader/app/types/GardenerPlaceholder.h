#pragma once
#include <Modloader/app/structs/GardenerPlaceholder.h>
#include <Modloader/app/structs/GardenerPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GardenerPlaceholder {
        inline app::GardenerPlaceholder__Class** type_info() {
            static app::GardenerPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GardenerPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GardenerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::GardenerPlaceholder__Class>(type_info(), "", "GardenerPlaceholder");
        }
        inline app::GardenerPlaceholder* create() {
            return il2cpp::create_object<app::GardenerPlaceholder>(get_class());
        }
    } // namespace GardenerPlaceholder
} // namespace app::classes::types
