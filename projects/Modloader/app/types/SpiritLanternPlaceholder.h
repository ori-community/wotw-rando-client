#pragma once
#include <Modloader/app/structs/SpiritLanternPlaceholder.h>
#include <Modloader/app/structs/SpiritLanternPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLanternPlaceholder {
        inline app::SpiritLanternPlaceholder__Class** type_info() {
            static app::SpiritLanternPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLanternPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLanternPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpiritLanternPlaceholder__Class>(type_info(), "", "SpiritLanternPlaceholder");
        }
        inline app::SpiritLanternPlaceholder* create() {
            return il2cpp::create_object<app::SpiritLanternPlaceholder>(get_class());
        }
    } // namespace SpiritLanternPlaceholder
} // namespace app::classes::types
