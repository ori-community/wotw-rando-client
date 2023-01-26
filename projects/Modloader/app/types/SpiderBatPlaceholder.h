#pragma once
#include <Modloader/app/structs/SpiderBatPlaceholder.h>
#include <Modloader/app/structs/SpiderBatPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatPlaceholder {
        inline app::SpiderBatPlaceholder__Class** type_info() {
            static app::SpiderBatPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatPlaceholder__Class>(type_info(), "", "SpiderBatPlaceholder");
        }
        inline app::SpiderBatPlaceholder* create() {
            return il2cpp::create_object<app::SpiderBatPlaceholder>(get_class());
        }
    } // namespace SpiderBatPlaceholder
} // namespace app::classes::types
