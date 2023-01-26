#pragma once
#include <Modloader/app/structs/SpiderBatEntityReactions.h>
#include <Modloader/app/structs/SpiderBatEntityReactions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatEntityReactions {
        inline app::SpiderBatEntityReactions__Class** type_info() {
            static app::SpiderBatEntityReactions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatEntityReactions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatEntityReactions__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatEntityReactions__Class>(type_info(), "", "SpiderBatEntityReactions");
        }
        inline app::SpiderBatEntityReactions* create() {
            return il2cpp::create_object<app::SpiderBatEntityReactions>(get_class());
        }
    } // namespace SpiderBatEntityReactions
} // namespace app::classes::types
