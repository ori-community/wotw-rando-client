#pragma once
#include <Modloader/app/structs/SpiderlingDeathReaction.h>
#include <Modloader/app/structs/SpiderlingDeathReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingDeathReaction {
        inline app::SpiderlingDeathReaction__Class** type_info() {
            static app::SpiderlingDeathReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderlingDeathReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderlingDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingDeathReaction__Class>(type_info(), "", "SpiderlingDeathReaction");
        }
        inline app::SpiderlingDeathReaction* create() {
            return il2cpp::create_object<app::SpiderlingDeathReaction>(get_class());
        }
    } // namespace SpiderlingDeathReaction
} // namespace app::classes::types
