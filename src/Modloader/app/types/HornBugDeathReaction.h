#pragma once
#include <Modloader/app/structs/HornBugDeathReaction.h>
#include <Modloader/app/structs/HornBugDeathReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugDeathReaction {
        inline app::HornBugDeathReaction__Class** type_info() {
            static app::HornBugDeathReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugDeathReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::HornBugDeathReaction__Class>(type_info(), "", "HornBugDeathReaction");
        }
        inline app::HornBugDeathReaction* create() {
            return il2cpp::create_object<app::HornBugDeathReaction>(get_class());
        }
    } // namespace HornBugDeathReaction
} // namespace app::classes::types
