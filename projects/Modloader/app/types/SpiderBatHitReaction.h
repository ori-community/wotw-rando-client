#pragma once
#include <Modloader/app/structs/SpiderBatHitReaction.h>
#include <Modloader/app/structs/SpiderBatHitReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatHitReaction {
        inline app::SpiderBatHitReaction__Class** type_info() {
            static app::SpiderBatHitReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatHitReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatHitReaction__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatHitReaction__Class>(type_info(), "", "SpiderBatHitReaction");
        }
        inline app::SpiderBatHitReaction* create() {
            return il2cpp::create_object<app::SpiderBatHitReaction>(get_class());
        }
    } // namespace SpiderBatHitReaction
} // namespace app::classes::types
