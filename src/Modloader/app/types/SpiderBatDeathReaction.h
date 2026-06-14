#pragma once
#include <Modloader/app/structs/SpiderBatDeathReaction.h>
#include <Modloader/app/structs/SpiderBatDeathReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatDeathReaction {
        inline app::SpiderBatDeathReaction__Class** type_info() {
            static app::SpiderBatDeathReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatDeathReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatDeathReaction__Class>(type_info(), "", "SpiderBatDeathReaction");
        }
        inline app::SpiderBatDeathReaction* create() {
            return il2cpp::create_object<app::SpiderBatDeathReaction>(get_class());
        }
    } // namespace SpiderBatDeathReaction
} // namespace app::classes::types
